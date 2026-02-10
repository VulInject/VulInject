# VulBERTa

This is the codebase for the multi-class vulnerability detection experiments for VulBERTa.

## Project Structure

```text
VulBERTa/
├── cwe_config.json
├── data/
│   ├── primevul_train.json
│   ├── primevul_valid.json
│   ├── primevul_test.json
│   ├── generated_2741_train.json
│   └── generated_5482_train.json
├── models/
│   ├── VulBERTa/
│   └── tokenizer/
├── outputs/
│   └── {run_name}/
│       ├── checkpoint-*/
│       ├── result.csv
│       ├── best_model/
│       └── eval.csv (optional)
├── train.py
└── environment.yaml

```

## Environment Setup

### 1) Create Python environment

The original experiments were executed in a Conda environment (`vulberta`).
Use the exported environment file:

```bash
conda env create -f environment.yaml
conda activate vulinject
```

If you need the CUDA 11.7 wheel build explicitly, install PyTorch again after environment creation:

```bash
pip install torch==1.13.1+cu117 torchvision==0.14.1+cu117 torchaudio==0.13.1 \
  --extra-index-url https://download.pytorch.org/whl/cu117
```

### 2) Required core packages

- Python 3.8+
- PyTorch
- Transformers (4.4.1 compatible)
- Tokenizers (0.10.1 compatible)
- libclang

## Downloading VulBERTa Model

If `models/VulBERTa` is not present, download the official pre-trained weights and unzip under `models/`:

1. Download pre-training model archive:  
   `https://1drv.ms/u/s!AueKnGqzBuIVkq4CynZHsF8Mv-en1g?e=3gg60p`
2. Unzip in `models/`:

```bash
cd models
unzip pretraining_model.zip
```

The model path should be:

```text
models/VulBERTa
```

## Label Mapping

`cwe_config.json` defines CWE-to-label mapping and is loaded directly by `train.py`.

## Training Usage

Run from `VulBERTa/`.

Note: `train.py` includes an automatic compatibility patch for legacy `transformers==4.4.1` installations that may fail with `Invalid version: '0.10.1,<0.11'`.

### Example 1: Baseline training set
```bash
python train.py \
  --gpu 0 \
  --train_data data/primevul_train.json \
  --valid_data data/primevul_valid.json \
  --test_data data/primevul_test.json \
  --epoch 50 \
  --patience 10 \
  --run_name primevul_baseline
```

### Example 2: Generated training set (2741)
```bash
python train.py \
  --gpu 0 \
  --train_data data/generated_2741_train.json \
  --valid_data data/primevul_valid.json \
  --test_data data/primevul_test.json \
  --epoch 50 \
  --patience 10 \
  --run_name primevul_generated_2741
```

### Example 3: Generated training set (5482)
```bash
python train.py \
  --gpu 0 \
  --train_data data/generated_5482_train.json \
  --valid_data data/primevul_valid.json \
  --test_data data/primevul_test.json \
  --epoch 50 \
  --patience 10 \
  --run_name primevul_generated_5482
```

### CLI Arguments

- `--gpu` (optional, default `0`): CUDA device id.
- `--train_data` (required): training JSON path.
- `--valid_data` (required): validation JSON path.
- `--test_data` (optional, default empty): test JSON path.
- `--epoch` (optional, default `50`): max epochs.
- `--patience` (optional, default `10`): early stopping patience.
- `--run_name` (optional, default Unix timestamp): run output folder name.

## Output Files

For each run, files are written to `outputs/{run_name}`:

- `checkpoint-*`: model checkpoint for each epoch.
- `result.csv`: one row per validation epoch with `epoch,acc,prec,recall,f1` (weighted metrics).
- `best_model/`: best checkpoint selected by weighted F1.
- `eval.csv`: best-model test evaluation (`epoch,acc,prec,recall,f1`) if `--test_data` is provided.

