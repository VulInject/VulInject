import pandas as pd
import pickle
import os

def analyze_val_column(df, description=""):
    """
    Prints statistical distribution information of the 'val' column in the DataFrame.
    """
    print(f"\n     >>>>> [Analysis] {description} <<<<<")
    print(f"     Data Shape: {df.shape}")
    
    # 1. Check if column exists
    if "val" not in df.columns:
        print(f"     [WARNING] 'val' column not found! Existing columns: {df.columns.tolist()}")
        return

    # 2. Print Value Counts
    # dropna=False ensures we can see if there are NaN values
    vc = df["val"].value_counts(dropna=False).to_dict()
    print(f"     Distribution Statistics (Value Counts): {vc}")

    # 3. Print Value Range (if applicable)
    try:
        val_min = df["val"].min()
        val_max = df["val"].max()
        print(f"     Value Range: Min={val_min}, Max={val_max}")
    except Exception as e:
        print(f"     Unable to calculate Min/Max: {e}")
    print("     " + "-" * 40)


def merge_pkl_files(input_files, output_file, description=""):
    """
    Merges multiple pkl files and saves them; prints the val distribution of each file during loading.
    """
    if not input_files:
        print(f"[WARNING] {description}: No file paths provided, skipping.")
        return

    dataframes = []
    
    print(f"\n{description}: Starting to load and analyze {len(input_files)} input files...")
    
    for file in input_files:
        if not os.path.exists(file):
            print(f"[WARNING] File does not exist, skipping: {file}")
            continue
            
        # Get filename for easier reading
        file_basename = os.path.basename(file)
        # print(f"Loading: {file}")
        
        with open(file, 'rb') as f:
            try:
                df = pickle.load(f)
                
                # [New Feature Here]: Analyze individual file immediately after loading
                analyze_val_column(df, description=f"Input File: {file_basename}")
                
                dataframes.append(df)
            except Exception as e:
                print(f"[ERROR] Failed to load file {file}: {e}")

    if not dataframes:
        print(f"[ERROR] {description}: No data loaded, cannot save.")
        return

    # 1. Execute merge
    merged_df = pd.concat(dataframes, ignore_index=True)
    print(f"\n>>> All files loaded, merging...")
    print(f"{description}: Merged {len(dataframes)} files, total {len(merged_df)} samples.")

    # (Optional) You can still keep the code to view the final result, comment out if not needed
    # analyze_val_column(merged_df, description=f"Final Merge Result ({os.path.basename(output_file)})")

    # 2. Save file
    os.makedirs(os.path.dirname(output_file), exist_ok=True)
    with open(output_file, 'wb') as f:
        pickle.dump(merged_df, f)

    print(f"File saved to: {output_file}\n")


if __name__ == "__main__":
    # ================= Configuration Area =================
    
    dataset_name = 'vulgen_1'
    base_root = '/root/models/data/pkl'

    # Intermediate directory list (supports empty string '' representing no intermediate layer)
    target_middle_dirs = [
        'vulcnn',   
        '',        
        'vulroberta'
    ]
    # ======================================================

    print(f"Starting task, need to process {len(target_middle_dirs)} groups of paths...\n")

    for middle_dir in target_middle_dirs:
        # Display name
        dir_display = middle_dir if middle_dir else "No Intermediate Dir (Root Level)"
        print(f"==========================================")
        print(f"=== Processing: {dir_display} ===")
        print(f"==========================================")

        # Path concatenation
        current_work_dir = os.path.join(base_root, middle_dir, 'sub_original_dataset')

        # Input file list
        input_files = [
            os.path.join(current_work_dir, dataset_name, f'{dataset_name}.pkl'),
            os.path.join(current_work_dir, 'vgx_0_5000', 'vgx_0_5000.pkl'),
            os.path.join(current_work_dir, 'primevul_train', 'primevul_train.pkl')
        ]

        # Output file path
        output_file = os.path.join(current_work_dir, dataset_name, 'train_new.pkl')

        # Execute merge and analysis
        merge_pkl_files(
            input_files, 
            output_file, 
            description=f"[{dir_display}]"
        )

    print("-" * 30)
    print("All tasks completed.")