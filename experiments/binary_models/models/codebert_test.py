import os
import pandas as pd
import numpy as np
from torch.utils.data import DataLoader, Dataset
import torch
import json
from tqdm import tqdm

# Import model from the project
from model.CodeBert import CodeBert_Classifier

# === Custom Dataset Class (keeping previous fixes) ===
class LocalCodeBertDataset(Dataset):
    def __init__(self, data_df, tokenizer, max_len):
        self.data = data_df
        self.tokenizer = tokenizer
        self.max_len = max_len
        
        # 1. Automatically identify code column name
        self.code_col = None
        possible_code_cols = ['code', 'codes', 'function', 'func', 'source', 'src', 'subcode']
        for col in possible_code_cols:
            if col in data_df.columns:
                self.code_col = col
                break
        
        if self.code_col is None:
            raise KeyError(f"❌ Failed to automatically identify code column. Current columns: {list(data_df.columns)}")

        # 2. Automatically identify label column name
        self.target_col = None
        possible_target_cols = ['val', 'target', 'targets', 'label', 'labels', 'vul', 'is_vul']
        for col in possible_target_cols:
            if col in data_df.columns:
                self.target_col = col
                break
        
        if self.target_col is None:
            raise KeyError(f"❌ Failed to automatically identify label column. Current columns: {list(data_df.columns)}")

        print(f"✅ Automatic column mapping: Code='{self.code_col}', Target='{self.target_col}'")

    def __len__(self):
        return len(self.data)

    def __getitem__(self, idx):
        row = self.data.iloc[idx]
        
        # Handle list-type code (Codebert.py has "".join logic)
        raw_code = row[self.code_col]
        if isinstance(raw_code, list):
            code = "".join(raw_code)
        else:
            code = str(raw_code)

        target = int(row[self.target_col])
        filename = row['filename'] if 'filename' in self.data.columns else f"unknown_{idx}.c"

        inputs = self.tokenizer.encode_plus(
            code,
            None,
            add_special_tokens=True,
            max_length=self.max_len,
            padding='max_length',
            truncation=True,
            return_token_type_ids=False # Set to False in Codebert.py
        )

        return {
            'input_ids': torch.tensor(inputs['input_ids'], dtype=torch.long),
            'attention_mask': torch.tensor(inputs['attention_mask'], dtype=torch.long),
            'target': torch.tensor(target, dtype=torch.float), # BCE Loss requires float target
            'filename': filename
        }

# === Metric calculation functions ===
def calculate_metrics(filenames, true_labels, pred_labels, prefix=None):
    if prefix is not None:
        indices = [i for i, filename in enumerate(filenames) if filename.startswith(prefix)]
    else:
        indices = range(len(filenames))
    
    # Ensure conversion to int for comparison
    pred_labels = np.array(pred_labels, dtype=int)
    true_labels = np.array(true_labels, dtype=int)

    TP_files = [filenames[i] for i in indices if pred_labels[i] == 1 and true_labels[i] == 1]
    TN_files = [filenames[i] for i in indices if pred_labels[i] == 0 and true_labels[i] == 0]
    FP_files = [filenames[i] for i in indices if pred_labels[i] == 1 and true_labels[i] == 0]
    FN_files = [filenames[i] for i in indices if pred_labels[i] == 0 and true_labels[i] == 1]

    TP = len(TP_files)
    TN = len(TN_files)
    FP = len(FP_files)
    FN = len(FN_files)

    precision = TP / (TP + FP) if (TP + FP) > 0 else 0
    recall = TP / (TP + FN) if (TP + FN) > 0 else 0
    f1 = 2 * (precision * recall) / (precision + recall) if (precision + recall) > 0 else 0

    return {
        "TP": TP, "TN": TN, "FP": FP, "FN": FN,
        "precision": precision, "recall": recall, "f1_score": f1,
        "TP_files": TP_files, "TN_files": TN_files, "FP_files": FP_files, "FN_files": FN_files
    }

def codebert_test(model_path, dataset_path):
    print("Initializing Classifier...")
    # Note: Codebert.py hardcodes num_labels=1, so the nclass parameter here doesn't actually work,
    # but it's passed for compatibility during initialization
    classifier = CodeBert_Classifier(
        item_num=0, epochs=1, hidden_size=768, nclass=1, 
        batch_size=64, learning_rate=2e-5, max_len=256
    )

    print(f"Loading model from: {model_path}")
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    classifier.model.load_state_dict(torch.load(model_path, map_location=device))
    model = classifier.model.to(device)
    model.eval()

    print(f"Loading data from: {dataset_path}")
    data_df = pd.read_pickle(dataset_path)
    
    test_set = LocalCodeBertDataset(data_df, classifier.tokenizer, classifier.max_len)
    test_loader = DataLoader(test_set, batch_size=classifier.batch_size, shuffle=False)

    all_preds = []
    all_labels = []
    filenames = []
    
    print("Starting inference...")
    progress_bar = tqdm(enumerate(test_loader), total=len(test_loader))

    with torch.no_grad():
        for _, data in progress_bar:
            input_ids = data['input_ids'].to(device)
            attention_mask = data['attention_mask'].to(device)
            targets = data['target'].to(device)
            filenames_batch = data['filename']

            # 1. Get model output (tuple)
            outputs = model(input_ids, attention_mask)
            
            # 2. Unpack tuple to get logits
            logits = outputs[0] # [batch_size, 1]
            
            # 3. [Important] Use Sigmoid + threshold (matching training logic in Codebert.py)
            probs = torch.sigmoid(logits)
            preds = (probs > 0.45).long().flatten() # 
            
            # 4. Collect results
            filenames += filenames_batch
            all_preds += preds.cpu().tolist()
            all_labels += targets.long().flatten().cpu().tolist() # Convert target back to long for statistics

    metrics = calculate_metrics(filenames, np.array(all_labels), np.array(all_preds))

    results = {
        "filenames": filenames,
        "predictions": all_preds,
        "labels": all_labels,
        "TP": metrics["TP"], "TN": metrics["TN"], "FP": metrics["FP"], "FN": metrics["FN"],
        "f1_score": metrics["f1_score"], "precision": metrics["precision"], "recall": metrics["recall"],
        "TP_files": metrics["TP_files"], "TN_files": metrics["TN_files"], 
        "FP_files": metrics["FP_files"], "FN_files": metrics["FN_files"]
    }
    return results

def load_file_set(txt_path):
    """Read txt file and store each line in a set"""
    if not os.path.exists(txt_path):
        print(f"Warning: Cannot find file {txt_path}, will be treated as empty set.")
        return set()
    with open(txt_path, 'r') as f:
        return set(line.strip() for line in f if line.strip())

if __name__ == "__main__":


    # Configure paths
    model_path = "/home/VulInject_copy/experiments/binary_models/models/result/codebert/sub_original_dataset/primevul_train/model/0_bat64_dim128_lr2e-05_min_loss.pt"
    dataset_path = "./data/pkl/sub_original_dataset/primevul_train/test_new.pkl"
    output_json_path = './codebert_test_result.json'

    try:
        results = codebert_test(model_path, dataset_path)
        
        with open(output_json_path, 'w+') as f:
            json.dump(results, f, indent=4)
        print(f"\n✅ Results saved to {output_json_path}")
        
        print("="*40)
        print(f"Total: {len(results['filenames'])}")
        print(f"TP: {results['TP']} | TN: {results['TN']}")
        print(f"FP: {results['FP']} | FN: {results['FN']}")
        print("-" * 40)
        print(f"Precision: {results['precision']:.4f}")
        print(f"Recall:    {results['recall']:.4f}")
        print(f"F1 Score:  {results['f1_score']:.4f}")
        print("="*40)
        RESULT_JSON_PATH = './codebert_test_result.json'

        if not os.path.exists(RESULT_JSON_PATH):
            print("Error: Cannot find test result file")
  

        with open(RESULT_JSON_PATH, 'r') as f:
            results = json.load(f)
        

    except Exception as e:
        print(f"\n❌ Error occurred: {e}")
        import traceback
        traceback.print_exc()