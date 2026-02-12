import os
import pandas as pd
import numpy as np
from torch.utils.data import DataLoader
import torch
import json
from model.VulRoberta import Roberta_Classifier, RobertaDataset
from tqdm import tqdm

# ==========================================
# 1. Basic Metrics Calculation
# ==========================================
def calculate_metrics(filenames, true_labels, pred_labels, prefix=None):
    if prefix is not None:
        indices = [i for i, filename in enumerate(filenames) if filename.startswith(prefix)]
    else:
        indices = range(len(filenames))
    
    # Convert to numpy array to avoid indexing issues
    pred_labels = np.array(pred_labels)
    true_labels = np.array(true_labels)
    filenames_arr = np.array(filenames) # For convenient indexing

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
        "TP_files": TP_files, "TN_files": TN_files, 
        "FP_files": FP_files, "FN_files": FN_files
    }

# ==========================================
# 2. VulRoberta Test Logic
# ==========================================
def vulberta_test(model_path, dataset_path):
    print("Initializing Classifier...")
    classifier = Roberta_Classifier(
        item_num=0,
        epochs=50,
        hidden_size=128,
        nclass=2,
        batch_size=16,
        learning_rate=2e-5,
        max_len=256
    )

    print(f"Loading model from: {model_path}")
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    classifier.model.load_state_dict(torch.load(model_path, map_location=device))
    classifier.model.to(device)
    classifier.device = device

    print(f"Loading data from: {dataset_path}")
    data_df = pd.read_pickle(dataset_path)
    test_set = RobertaDataset(data=data_df)
    test_loader = DataLoader(test_set, batch_size=classifier.batch_size, shuffle=False)

    model = classifier.model.eval()
    all_preds = []
    all_labels = []
    filenames = []
    
    print("Starting inference...")
    progress_bar = tqdm(enumerate(test_loader), total=len(test_loader))

    with torch.no_grad():
        for _, data in progress_bar:
            codes = data["codes"].to(classifier.device)
            targets = data["targets"].to(classifier.device)
            filenames_batch = data["filename"]

            outputs = classifier.model(codes)
            preds = torch.argmax(outputs, dim=1).flatten()

            filenames += filenames_batch
            all_preds += preds.cpu().tolist()
            all_labels += targets.cpu().tolist()

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

if __name__ == "__main__":

    # === Configuration Paths ===
    model_path = "/home/VulInject_copy/experiments/binary_models/models/result/vulroberta/sub_original_dataset/sard_5000/model/0_bat64_dim768_lr2e-05_epo7.pt"
    dataset_path = "/home/VulInject_copy/experiments/binary_models/models/data/pkl/vulroberta/sub_original_dataset/primevul_test/test_new.pkl"
    output_json_path = './vulberta_test_result.json'
    
    try:
        # 1. Run test
        results = vulberta_test(model_path, dataset_path)
        
        # 2. Save JSON
        with open(output_json_path, 'w+') as f:
            json.dump(results, f, indent=4)
        print(f"\n✅ Results saved to {output_json_path}")
        
        # 3. Print basic metrics
        print("="*40)
        print(f"Number of results: {len(results['filenames'])}")
        print(f"TP: {results['TP']}, TN: {results['TN']}, FP: {results['FP']}, FN: {results['FN']}")
        print("-" * 40)
        print(f"Precision: {results['precision']:.4f}")
        print(f"Recall:    {results['recall']:.4f}")
        print(f"F1 Score:  {results['f1_score']:.4f}")
        print("="*40)

    except Exception as e:
        print(f"\n❌ Error occurred: {e}")
        import traceback
        traceback.print_exc()