#!/usr/bin/env python3
"""
Train VulBERTa for multi-class CWE classification.

This script supports:
- Custom train/valid/test JSON datasets.
- CWE label mapping loaded from `cwe_config.json`.
- Epoch-level evaluation logging to `outputs/{run_name}/result.csv`.
- Checkpoint saving at each epoch.
- Best-model selection by weighted F1 and export to `best_model`.
- Optional final evaluation on test set to `eval.csv`.
"""

import argparse
import csv
import json
import os
import random
import re
import sysconfig
import time
from pathlib import Path
from typing import Dict, List, Optional, Tuple

import numpy as np
import torch
from clang import cindex
from sklearn.metrics import accuracy_score, precision_recall_fscore_support
from tokenizers import NormalizedString, PreTokenizedString, Tokenizer, normalizers, processors
from tokenizers.models import BPE
from tokenizers.normalizers import Replace, StripAccents
from tokenizers.pre_tokenizers import PreTokenizer
from tokenizers.processors import TemplateProcessing
from torch.utils.data import Dataset


def patch_legacy_transformers_tokenizers_requirement() -> None:
    """
    Patch legacy `transformers==4.4.1` dependency table if needed.

    Some installations fail with:
    `packaging.version.InvalidVersion: Invalid version: '0.10.1,<0.11'`
    because of old internal requirement parsing logic.
    """
    purelib = sysconfig.get_paths().get("purelib")
    if not purelib:
        return

    dependency_table_path = Path(purelib) / "transformers" / "dependency_versions_table.py"
    if not dependency_table_path.exists():
        return

    original_text = dependency_table_path.read_text(encoding="utf-8")
    old_pattern = '"tokenizers": "tokenizers>=0.10.1,<0.11"'
    new_pattern = '"tokenizers": "tokenizers>=0.10.1"'
    if old_pattern not in original_text:
        return

    patched_text = original_text.replace(old_pattern, new_pattern)
    dependency_table_path.write_text(patched_text, encoding="utf-8")


patch_legacy_transformers_tokenizers_requirement()
from transformers import EarlyStoppingCallback, RobertaForSequenceClassification, Trainer, TrainingArguments


def parse_args() -> argparse.Namespace:
    """Parse command line arguments."""
    parser = argparse.ArgumentParser(description="Train VulBERTa on CWE multi-class classification.")
    parser.add_argument("--gpu", type=str, default="0", help="GPU device id (default: 0).")
    parser.add_argument("--train_data", type=str, required=True, help="Path to training JSON dataset.")
    parser.add_argument("--valid_data", type=str, required=True, help="Path to validation JSON dataset.")
    parser.add_argument(
        "--test_data",
        type=str,
        default="",
        help="Path to test JSON dataset (optional, default: empty).",
    )
    parser.add_argument("--epoch", type=int, default=50, help="Maximum number of epochs (default: 50).")
    parser.add_argument("--patience", type=int, default=10, help="Early stopping patience (default: 10).")
    parser.add_argument(
        "--run_name",
        type=str,
        default="",
        help="Training run name used under outputs/{run_name}; default is Unix timestamp.",
    )
    parser.add_argument(
        "--cwe_config",
        type=str,
        default="cwe_config.json",
        help="Path to CWE mapping config JSON (default: cwe_config.json).",
    )
    parser.add_argument(
        "--model_dir",
        type=str,
        default="models/VulBERTa",
        help="Path to pre-trained VulBERTa model directory (default: models/VulBERTa).",
    )
    parser.add_argument(
        "--tokenizer_dir",
        type=str,
        default="models/tokenizer",
        help="Path to tokenizer directory (default: models/tokenizer).",
    )
    return parser.parse_args()


def set_global_seed(seed: int = 42) -> None:
    """Set deterministic seeds for reproducibility."""
    os.environ["PYTHONHASHSEED"] = str(seed)
    random.seed(seed)
    np.random.seed(seed)
    torch.manual_seed(seed)
    torch.cuda.manual_seed(seed)
    torch.cuda.manual_seed_all(seed)
    torch.backends.cudnn.enabled = True
    torch.backends.cudnn.deterministic = True
    torch.backends.cudnn.benchmark = False


def load_cwe_labels(config_path: Path) -> Dict[str, int]:
    """Load CWE->label mapping from config JSON."""
    with config_path.open("r", encoding="utf-8") as file:
        raw = json.load(file)

    if isinstance(raw, dict) and all(isinstance(value, int) for value in raw.values()):
        mapping = raw
    elif isinstance(raw, dict):
        if "cwe_labels" in raw and isinstance(raw["cwe_labels"], dict):
            mapping = raw["cwe_labels"]
        elif "CWE_LABELS" in raw and isinstance(raw["CWE_LABELS"], dict):
            mapping = raw["CWE_LABELS"]
        else:
            raise ValueError("Invalid cwe_config.json format. Expected direct mapping or key `cwe_labels`.")
    else:
        raise ValueError("Invalid cwe_config.json format. Expected JSON object.")

    for cwe_id, label in mapping.items():
        if not isinstance(cwe_id, str) or not isinstance(label, int):
            raise ValueError("Each CWE mapping entry must be `string -> integer`.")

    return mapping


class ClangTokenizer:
    """Custom pre-tokenizer that splits C/C++ code using libclang tokens."""

    cidx = cindex.Index.create()

    def clang_split(self, _: int, normalized_string: NormalizedString) -> List[NormalizedString]:
        tokens: List[NormalizedString] = []
        try:
            translation_unit = self.cidx.parse(
                "tmp.c",
                args=[""],
                unsaved_files=[("tmp.c", str(normalized_string.original))],
                options=0,
            )
            for token in translation_unit.get_tokens(extent=translation_unit.cursor.extent):
                spelling = token.spelling.strip()
                if spelling:
                    tokens.append(NormalizedString(spelling))
        except Exception:
            # Keep silent and return an empty list if clang parsing fails on one sample.
            pass
        return tokens

    def pre_tokenize(self, pretok: PreTokenizedString) -> None:
        """Hook used by tokenizers.PreTokenizer.custom."""
        pretok.split(self.clang_split)


def build_tokenizer(tokenizer_dir: Path) -> Tokenizer:
    """Construct tokenizer from saved BPE vocab/merges and custom settings."""
    vocab_path = tokenizer_dir / "drapgh-vocab.json"
    merges_path = tokenizer_dir / "drapgh-merges.txt"
    if not vocab_path.exists() or not merges_path.exists():
        raise FileNotFoundError(f"Tokenizer files not found under {tokenizer_dir}.")

    vocab, merges = BPE.read_file(vocab=str(vocab_path), merges=str(merges_path))
    tokenizer = Tokenizer(BPE(vocab, merges, unk_token="<unk>"))
    tokenizer.normalizer = normalizers.Sequence([StripAccents(), Replace(" ", "Ä")])
    tokenizer.pre_tokenizer = PreTokenizer.custom(ClangTokenizer())
    tokenizer.post_processor = processors.ByteLevel(trim_offsets=False)
    tokenizer.post_processor = TemplateProcessing(
        single="<s> $A </s>",
        special_tokens=[
            ("<s>", 0),
            ("<pad>", 1),
            ("</s>", 2),
            ("<unk>", 3),
            ("<mask>", 4),
        ],
    )
    tokenizer.enable_truncation(max_length=1024)
    tokenizer.enable_padding(direction="right", pad_id=1, pad_type_id=0, pad_token="<pad>")
    return tokenizer


def clean_code(code: str) -> str:
    """Remove comments and simple whitespace noise."""
    pattern = re.compile(r"(/\*([^*]|(\*+[^*/]))*\*+/)|(//.*)")
    code = re.sub(pattern, "", code)
    code = re.sub(r"\n", "", code)
    code = re.sub(r"\t", "", code)
    return code


def read_dataset(data_path: Path, cwe_labels: Dict[str, int]) -> Tuple[List[str], List[int]]:
    """Load and convert JSON data to code strings and integer labels."""
    with data_path.open("r", encoding="utf-8") as file:
        data = json.load(file)

    codes: List[str] = []
    labels: List[int] = []
    for item in data:
        cwe_id = item["cwe_id"]
        if cwe_id not in cwe_labels:
            raise KeyError(f"CWE id `{cwe_id}` in {data_path} is missing in cwe_config.json.")
        codes.append(clean_code(item["code"]))
        labels.append(cwe_labels[cwe_id])
    return codes, labels


def process_encodings(encodings) -> Dict[str, List[List[int]]]:
    """Convert tokenizers batch output into lists expected by torch Dataset."""
    input_ids: List[List[int]] = []
    attention_mask: List[List[int]] = []
    for encoding in encodings:
        input_ids.append(encoding.ids)
        attention_mask.append(encoding.attention_mask)
    return {"input_ids": input_ids, "attention_mask": attention_mask}


class CodeDataset(Dataset):
    """Simple dataset wrapper for tokenized code and labels."""

    def __init__(self, encodings: Dict[str, List[List[int]]], labels: List[int]):
        self.encodings = encodings
        self.labels = labels

    def __getitem__(self, idx: int) -> Dict[str, torch.Tensor]:
        item = {key: torch.tensor(value[idx]) for key, value in self.encodings.items()}
        item["labels"] = torch.tensor(self.labels[idx])
        return item

    def __len__(self) -> int:
        return len(self.labels)


def build_class_weights(train_labels: List[int], num_labels: int, device: torch.device) -> torch.Tensor:
    """
    Build per-class weights for imbalanced training.
    Missing classes keep weight 1.0.
    """
    counts = np.bincount(train_labels, minlength=num_labels)
    total = counts.sum()
    weights = np.ones(num_labels, dtype=np.float32)
    for index, count in enumerate(counts):
        if count > 0:
            weights[index] = total / (num_labels * float(count))
    return torch.tensor(weights, dtype=torch.float32, device=device)


def compute_metrics(prediction_output) -> Dict[str, float]:
    """Compute weighted metrics for multi-class classification."""
    labels = prediction_output.label_ids
    preds = prediction_output.predictions.argmax(-1)
    precision, recall, f1, _ = precision_recall_fscore_support(
        labels, preds, average="weighted", zero_division=0
    )
    accuracy = accuracy_score(labels, preds)
    return {"accuracy": accuracy, "precision": precision, "recall": recall, "f1": f1}


def format_metric_2_4(value: float) -> str:
    """Format metric as `00.xxxx` (2 integer digits + 4 decimal digits)."""
    return f"{float(value):07.4f}"


def infer_best_epoch_from_checkpoint(best_checkpoint_dir: Optional[str]) -> Optional[int]:
    """
    Infer the best epoch from checkpoint metadata.

    The function reads `{best_checkpoint_dir}/trainer_state.json` and extracts
    the `epoch` field if available.
    """
    if not best_checkpoint_dir:
        return None

    trainer_state_path = Path(best_checkpoint_dir) / "trainer_state.json"
    if not trainer_state_path.exists():
        return None

    try:
        with trainer_state_path.open("r", encoding="utf-8") as file:
            state_obj = json.load(file)
        epoch_value = state_obj.get("epoch")
        if epoch_value is None:
            return None
        return int(round(float(epoch_value)))
    except Exception:
        return None


class LoggingTrainer(Trainer):
    """Trainer extension that records validation metrics per epoch to CSV."""

    def __init__(
        self,
        *args,
        result_csv_path: Path,
        criterion: torch.nn.Module,
        **kwargs,
    ):
        super().__init__(*args, **kwargs)
        self.result_csv_path = result_csv_path
        self.criterion = criterion
        self._init_result_csv()

    def _init_result_csv(self) -> None:
        """Create CSV header once for the main process."""
        if self.is_world_process_zero():
            self.result_csv_path.parent.mkdir(parents=True, exist_ok=True)
            with self.result_csv_path.open("w", newline="", encoding="utf-8") as file:
                writer = csv.writer(file)
                writer.writerow(["epoch", "acc", "prec", "recall", "f1"])

    def compute_loss(self, model, inputs, return_outputs: bool = False):
        """Apply class-weighted loss."""
        labels = inputs.pop("labels")
        outputs = model(**inputs)
        logits = outputs["logits"]
        loss = self.criterion(logits, labels)
        return (loss, outputs) if return_outputs else loss

    def evaluate(self, eval_dataset=None, ignore_keys=None, metric_key_prefix: str = "eval"):
        """Run evaluation and append validation metrics for every epoch."""
        metrics = super().evaluate(
            eval_dataset=eval_dataset, ignore_keys=ignore_keys, metric_key_prefix=metric_key_prefix
        )
        if metric_key_prefix == "eval" and self.is_world_process_zero():
            epoch_float = self.state.epoch if self.state.epoch is not None else 0
            epoch_int = int(round(epoch_float))
            with self.result_csv_path.open("a", newline="", encoding="utf-8") as file:
                writer = csv.writer(file)
                writer.writerow(
                    [
                        epoch_int,
                        format_metric_2_4(metrics.get("eval_accuracy", 0.0)),
                        format_metric_2_4(metrics.get("eval_precision", 0.0)),
                        format_metric_2_4(metrics.get("eval_recall", 0.0)),
                        format_metric_2_4(metrics.get("eval_f1", 0.0)),
                    ]
                )
        return metrics


def write_test_eval(eval_csv_path: Path, metrics: Dict[str, float], best_epoch: Optional[int]) -> None:
    """Save final best-model test evaluation to eval.csv."""
    with eval_csv_path.open("w", newline="", encoding="utf-8") as file:
        writer = csv.writer(file)
        writer.writerow(["epoch", "acc", "prec", "recall", "f1"])
        writer.writerow(
            [
                "" if best_epoch is None else int(best_epoch),
                format_metric_2_4(metrics.get("test_accuracy", 0.0)),
                format_metric_2_4(metrics.get("test_precision", 0.0)),
                format_metric_2_4(metrics.get("test_recall", 0.0)),
                format_metric_2_4(metrics.get("test_f1", 0.0)),
            ]
        )


def main() -> None:
    """Entrypoint for training."""
    args = parse_args()

    if not args.run_name:
        args.run_name = str(int(time.time()))

    os.environ["CUDA_VISIBLE_DEVICES"] = args.gpu
    os.environ["WANDB_DISABLED"] = "true"
    os.environ["WANDB_MODE"] = "dryrun"
    set_global_seed(42)

    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    print(f"Using device: {device}")

    script_dir = Path(__file__).resolve().parent
    train_path = (script_dir / args.train_data).resolve() if not Path(args.train_data).is_absolute() else Path(args.train_data)
    valid_path = (script_dir / args.valid_data).resolve() if not Path(args.valid_data).is_absolute() else Path(args.valid_data)
    test_path: Optional[Path] = None
    if args.test_data:
        test_path = (script_dir / args.test_data).resolve() if not Path(args.test_data).is_absolute() else Path(args.test_data)

    cwe_config_path = (script_dir / args.cwe_config).resolve() if not Path(args.cwe_config).is_absolute() else Path(args.cwe_config)
    model_dir = (script_dir / args.model_dir).resolve() if not Path(args.model_dir).is_absolute() else Path(args.model_dir)
    tokenizer_dir = (
        (script_dir / args.tokenizer_dir).resolve() if not Path(args.tokenizer_dir).is_absolute() else Path(args.tokenizer_dir)
    )

    run_output_dir = script_dir / "outputs" / args.run_name
    run_output_dir.mkdir(parents=True, exist_ok=True)
    result_csv_path = run_output_dir / "result.csv"
    eval_csv_path = run_output_dir / "eval.csv"
    best_model_dir = run_output_dir / "best_model"
    logs_dir = script_dir / "logs" / args.run_name
    logs_dir.mkdir(parents=True, exist_ok=True)

    cwe_labels = load_cwe_labels(cwe_config_path)
    num_labels = len(cwe_labels)
    print(f"Loaded {num_labels} CWE labels from {cwe_config_path}")

    tokenizer = build_tokenizer(tokenizer_dir)

    print("Loading and tokenizing datasets...")
    train_codes, train_labels = read_dataset(train_path, cwe_labels)
    valid_codes, valid_labels = read_dataset(valid_path, cwe_labels)
    test_codes: List[str] = []
    test_labels: List[int] = []
    if test_path is not None:
        test_codes, test_labels = read_dataset(test_path, cwe_labels)

    train_encodings = process_encodings(tokenizer.encode_batch(train_codes))
    valid_encodings = process_encodings(tokenizer.encode_batch(valid_codes))
    test_encodings = process_encodings(tokenizer.encode_batch(test_codes)) if test_codes else None

    train_dataset = CodeDataset(train_encodings, train_labels)
    valid_dataset = CodeDataset(valid_encodings, valid_labels)
    test_dataset = CodeDataset(test_encodings, test_labels) if test_encodings is not None else None

    class_weights = build_class_weights(train_labels, num_labels, device)
    criterion = torch.nn.CrossEntropyLoss(weight=class_weights)

    model = RobertaForSequenceClassification.from_pretrained(str(model_dir), num_labels=num_labels)

    training_args = TrainingArguments(
        output_dir=str(run_output_dir),
        overwrite_output_dir=True,
        num_train_epochs=args.epoch,
        per_device_train_batch_size=8,
        per_device_eval_batch_size=16,
        evaluation_strategy="epoch",
        save_strategy="epoch",
        save_total_limit=None,
        load_best_model_at_end=True,
        metric_for_best_model="f1",
        greater_is_better=True,
        learning_rate=3e-5,
        weight_decay=0.01,
        warmup_ratio=0.1,
        fp16=torch.cuda.is_available(),
        logging_dir=str(logs_dir),
        logging_steps=100,
        seed=42,
        report_to=None,
    )

    trainer = LoggingTrainer(
        model=model,
        args=training_args,
        train_dataset=train_dataset,
        eval_dataset=valid_dataset,
        compute_metrics=compute_metrics,
        callbacks=[EarlyStoppingCallback(early_stopping_patience=args.patience)],
        result_csv_path=result_csv_path,
        criterion=criterion,
    )

    print(f"Run output: {run_output_dir}")
    print("Start training...")
    trainer.train()
    print("Training finished.")

    # Trainer already holds the best model when load_best_model_at_end=True.
    best_model_dir.mkdir(parents=True, exist_ok=True)
    trainer.save_model(str(best_model_dir))
    print(f"Best model exported to: {best_model_dir}")

    if test_dataset is not None:
        print("Evaluating best model on test dataset...")
        test_metrics = trainer.evaluate(eval_dataset=test_dataset, metric_key_prefix="test")
        best_epoch = infer_best_epoch_from_checkpoint(trainer.state.best_model_checkpoint)
        write_test_eval(eval_csv_path, test_metrics, best_epoch=best_epoch)
        print(f"Test evaluation saved to: {eval_csv_path}")
    else:
        print("No test_data provided; skip final test evaluation.")


if __name__ == "__main__":
    main()
