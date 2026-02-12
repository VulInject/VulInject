import os
import torch
import json
import joblib
import numpy as np
from tqdm import tqdm

# === Import project modules ===
# Ensure project root is in PYTHONPATH
from model.devign import DevignModel 
# DataSet class is responsible for loading bin data and generating batches
from data_loader.dataset import DataSet 

# === 1. Metric calculation function (unchanged) ===
def calculate_metrics(filenames, true_labels, pred_labels, prefix=None):
    if prefix is not None:
        indices = [i for i, filename in enumerate(filenames) if filename.startswith(prefix)]
    else:
        indices = range(len(filenames))
    
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
        "precision": precision, "recall": recall, "f1_score": f1
    }

# === 2. Load file list helper function ===
def load_file_set(txt_path):
    if not os.path.exists(txt_path):
        print(f"Warning: Cannot find file {txt_path}, will be treated as empty set.")
        return set()
    with open(txt_path, 'r') as f:
        # Note: Ensure consistency with eval logic, if txt doesn't have suffixes, don't add them here
        return set(line.strip() for line in f if line.strip())

# === 3. Core test logic (strictly replicates Devign_Classifier.eval) ===
def devign_test(model_path, dataset_path, threshold=0.6):
    print("Step 1: Loading Dataset...")
    if not os.path.exists(dataset_path):
        raise FileNotFoundError(f"Dataset file not found: {dataset_path}")
    
    # Load dataset object
    dataset = joblib.load(open(dataset_path, 'rb'))
    
    # 【Critical fix】：Must explicitly initialize test batch to ensure pointer is reset
    # Original code logic: all_steps = self.dataset.initialize_test_batch()
    if hasattr(dataset, 'initialize_test_batch'):
        total_steps = dataset.initialize_test_batch()
    else:
        # If dataset object doesn't have initialize_test_batch, try to reset manually
        # For your code, usually DataSet has this method
        print("Warning: initialize_test_batch not found, trying to iterate test_batches directly.")
        total_steps = len(dataset.test_batches)
        dataset.batch_idx = 0 

    print(f"Dataset loaded. Total steps: {total_steps}, Feature size: {dataset.feature_size}")

    print("Step 2: Initializing Model...")
    # 【Parameters must match training】
    # You used graph_embed_size = 200 in train_devign
    # You used num_steps = 8 in train_devign (DevignModel default is 6, must change here)
    graph_embed_size = 200
    num_steps = 8 
    
    model = DevignModel(input_dim=dataset.feature_size, 
                        output_dim=graph_embed_size, 
                        num_steps=num_steps, 
                        max_edge_types=4)
    
    device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
    model.to(device)

    print(f"Step 3: Loading Weights from {model_path}...")
    model.load_state_dict(torch.load(model_path, map_location=device))
    model.eval()

    print("Step 4: Starting Inference...")
    all_preds = []
    all_labels = []
    all_probs = []
    filenames = []

    with torch.no_grad():
        # Use tqdm to simulate progress_bar in original code
        for _ in tqdm(range(total_steps), desc="Inference"):
            # 1. Get Batch (original code logic)
            graph, targets = dataset.get_next_test_batch()
            
            # 【Critical fix 1】：Filename processing
            # Original code: filename = [i.name.split(".")[0] for i in graph.subpdg]
            # Must add .split(".")[0], otherwise filenames won't match
            batch_filenames = [i.name.split(".")[0] for i in graph.subpdg]
            filenames.extend(batch_filenames)
            
            # 2. Prepare data
            targets = torch.tensor(targets).long().to(device)
            
            # 3. Forward propagation
            # Original code: outputs = self.model(graph, cuda=True)
            outputs = model(graph, cuda=True) 
            
            # 【Critical fix 2】：Probability calculation logic
            # Original code logic:
            # if outputs.dim() == 2 and outputs.size(1) == 2:
            #     probs = torch.nn.functional.softmax(outputs, dim=1)[:, 1]
            # else:
            #     probs = outputs
            
            # Even though DevignModel already has Sigmoid internally, the original eval code still forcibly adds Softmax
            # This is the root cause of inconsistent results. Must copy exactly.
            if outputs.dim() == 2 and outputs.size(1) == 2:
                probs = torch.nn.functional.softmax(outputs, dim=1)[:, 1]
            else:
                probs = outputs
            
            # 4. Generate predictions
            # Original code when calculating MCM score: pred_labels = (np_probs >= th).astype(int)
            preds = (probs >= threshold).long()
            
            all_probs.extend(probs.cpu().tolist())
            all_preds.extend(preds.cpu().tolist())
            all_labels.extend(targets.cpu().tolist())

    # Calculate metrics
    metrics = calculate_metrics(filenames, np.array(all_labels), np.array(all_preds))

    results = {
        "filenames": filenames,
        "probabilities": all_probs,
        "predictions": all_preds,
        "labels": all_labels,
        "TP": metrics["TP"], "TN": metrics["TN"], "FP": metrics["FP"], "FN": metrics["FN"],
        "f1_score": metrics["f1_score"], "precision": metrics["precision"], "recall": metrics["recall"]
    }
    print
    return results

# === 4. Main program ===
if __name__ == "__main__":
    # Please modify paths according to actual situation
    # Note: Ensure model_path points to min_loss.bin or .pt, code logic is universal
    MODEL_PATH = "/home/VulInject_copy/experiments/binary_models/models/result/devign/sub_original_dataset/vgx_1_5000/model/0_min_loss.bin"
    # Ensure reading the correct test set bin file
    DATASET_PATH = "./data/pkl/devign/sub_original_dataset/vgx_1_5000/final_0.bin"
    OUTPUT_JSON = "./devign_test_result.json"
    

    try:

        results = devign_test(MODEL_PATH, DATASET_PATH)
        print("\n" + "="*40)
        print("="*40)
        print(f"Precision : {results['precision']:.4f}")
        print(f"Recall    : {results['recall']:.4f}")
        print(f"F1 Score  : {results['f1_score']:.4f}")
        print("="*40 + "\n")
        # Save basic results
        with open(OUTPUT_JSON, 'w+') as f:
            json.dump(results, f, indent=4)
        print(f"Results saved to {OUTPUT_JSON}")


    except Exception as e:
        import traceback
        traceback.print_exc()