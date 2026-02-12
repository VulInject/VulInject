import os
import pandas as pd
import numpy as np
from torch.utils.data import DataLoader
import torch
import json
from model.VulCNN import VULCNN_Classifier, TraditionalDataset
from transformers import AdamW
from tqdm import tqdm
from sklearn.metrics import precision_recall_fscore_support

# ==========================================
# 1. Basic metric calculation (standard P/R/F1)
# ==========================================
def calculate_metrics(filenames, true_labels, pred_labels):
    pred_labels = np.array(pred_labels, dtype=int)
    true_labels = np.array(true_labels, dtype=int)

    TP_files = [filenames[i] for i in range(len(filenames)) if pred_labels[i] == 1 and true_labels[i] == 1]
    TN_files = [filenames[i] for i in range(len(filenames)) if pred_labels[i] == 0 and true_labels[i] == 0]
    FP_files = [filenames[i] for i in range(len(filenames)) if pred_labels[i] == 1 and true_labels[i] == 0]
    FN_files = [filenames[i] for i in range(len(filenames)) if pred_labels[i] == 0 and true_labels[i] == 1]

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
# 2. Scope analysis function (fixed suffix matching issue)
# ==========================================
def load_file_set(txt_path):
    """Read txt file and store each line in a set"""
    if not os.path.exists(txt_path):
        print(f"⚠️ Warning: Cannot find file {txt_path}, will be treated as empty set.")
        return set()
    with open(txt_path, 'r') as f:
        # Ensure to strip whitespace from both ends
        return set(line.strip() for line in f if line.strip())


# ==========================================
# 3. VulCNN test main logic
# ==========================================
def VulCNN_test(model_path, dataset_path):
    print("Initializing Classifier...")
    classifier = VULCNN_Classifier(
        item_num=0, epochs=50, hidden_size=128, 
        batch_size=16, learning_rate=2e-5, max_len=256
    )

    print(f"Loading model from: {model_path}")
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    classifier.model.load_state_dict(torch.load(model_path, map_location=device))
    classifier.model.to(device)
    classifier.device = device 

    print(f"Loading data from: {dataset_path}")
    data_df = pd.read_pickle(dataset_path)
    test_set = TraditionalDataset(data_df, max_len=classifier.max_len, hidden_size=classifier.hidden_size)
    test_loader = DataLoader(test_set, batch_size=classifier.batch_size, shuffle=False)
    
    model = classifier.model.eval()
    all_preds = []
    all_labels = []
    filenames = []

    print("Starting inference...")
    progress_bar = tqdm(enumerate(test_loader), total=len(test_loader))

    for i, data in progress_bar:
        inputs = data["vector"].to(classifier.device)
        labels = data["targets"].to(classifier.device)
        filename_batch = data["filename"]

        with torch.no_grad():
            outputs, _ = model(inputs)
            preds = torch.argmax(outputs, dim=1).flatten()

        all_preds.extend(preds.cpu().tolist())
        all_labels.extend(labels.cpu().tolist())
        filenames.extend(filename_batch)

    metrics = calculate_metrics(filenames, all_labels, all_preds)

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

    
    # === Configure paths ===
    model_path = "/home/VulInject_copy/experiments/binary_models/models/result/vulcnn/sub_original_dataset/primevul_train/model/0_bat128_dim128_lr0.0005_epo4.pt"
    dataset_path = "./data/pkl/vulcnn/sub_original_dataset/primevul_train/test_new.pkl"
    output_json_path = './vulcnn_test_result.json'
    


    try:
        # 1. Run test
        results = VulCNN_test(model_path, dataset_path)
        
        # 2. Save JSON
        with open(output_json_path, 'w+') as f:
            json.dump(results, f, indent=4)
        print(f"\n✅ Results saved to {output_json_path}")
        
        # 3. Print basic metrics
        print("="*40)
        print(f"Total: {len(results['filenames'])}")
        print(f"TP: {results['TP']} | TN: {results['TN']}")
        print(f"FP: {results['FP']} | FN: {results['FN']}")
        print("-" * 40)
        print(f"Precision: {results['precision']:.4f}")
        print(f"Recall:    {results['recall']:.4f}")
        print(f"F1 Score:  {results['f1_score']:.4f}")
        print("="*40)

      

    except Exception as e:
        print(f"\n❌ Error occurred: {e}")
        import traceback
        traceback.print_exc()