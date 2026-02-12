import os
import re
import pickle
import glob
from collections import Counter
import pandas as pd
from clean_gadget import clean_gadget
from parse import tokenizer
import random
from tqdm import tqdm
import logging

# Configure logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

def load_data(filename):
    """Load data from a pickle file."""
    logger.info(f"Reading data from: {filename}")
    try:
        with open(filename, 'rb') as f:
            loaded_data = pickle.load(f)
        return loaded_data
    except FileNotFoundError:
        logger.error(f"File not found: {filename}")
        raise
    except Exception as e:
        logger.error(f"Error loading data from {filename}: {str(e)}")
        raise

def save_data(filename, data):
    """Save data to a pickle file."""
    logger.info(f"Saving data to: {filename}")
    try:
        with open(filename, 'wb') as f:
            pickle.dump(data, f)
    except Exception as e:
        logger.error(f"Error saving data to {filename}: {str(e)}")
        raise

def ensure_directory_exists(path):
    """Ensure that a directory exists, creating it if necessary."""
    os.makedirs(path, exist_ok=True)

def process_code_with_clean_gadget(code_path, save_path):
    """Process code file with clean_gadget function."""
    with open(save_path, "w", encoding='utf-8') as temp_file:
        temp_file.write(code_path)

    with open(save_path, "r", encoding='utf-8') as temp_file:
        org_code = temp_file.readlines()
        nor_code = clean_gadget(org_code)

    with open(save_path, "w", encoding='utf-8') as temp_file:
        temp_file.writelines(nor_code)

    return org_code, nor_code

def process_single_file(file_path, save_path, filename, label_func=None):
    """
    Process a single file and return the processed data entry.

    Args:
        file_path: Path to the input file
        save_path: Path to save the processed file
        filename: Name of the file
        label_func: Function to determine label from filename, if None uses first character

    Returns:
        Dictionary with file data or None if processing failed
    """
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            code = f.read()
        code = re.sub(r'(?<!:)//.*|/\*(\s|.)*?\*/', "", code).strip()
    except UnicodeDecodeError:
        logger.warning(f"Could not decode file: {file_path}")
        return None
    except FileNotFoundError:
        logger.warning(f"File not found: {file_path}")
        return None
    except Exception as e:
        logger.warning(f"Error reading file {file_path}: {str(e)}")
        return None

    # Create directory if it doesn't exist
    os.makedirs(os.path.dirname(save_path), exist_ok=True)

    org_code, nor_code = process_code_with_clean_gadget(code, save_path)

    # Determine label - use provided function or default to first character of filename
    if label_func:
        val = label_func(filename)
    else:
        val = int(filename[0]) if filename and filename[0].isdigit() else 0

    return {"filename": filename, "code": org_code, "subcode": nor_code, "val": val}

def generate_ori_pkl():  # 根据.c文件获取源代码和sub代码的汇总pkl
    path = "./data/source_code/mutation_dataset/"
    save_path = "./data/source_code/sub_mutation_dataset/"
    save_pkl = "./data/pkl/mutation_dataset/"

    for dirname in os.listdir(path):
        logger.info(dirname)
        final = []
        dir_path = os.path.join(path, dirname)
        if not os.path.isdir(dir_path):
            continue

        for filename in os.listdir(dir_path):
            file = os.path.join(dir_path, filename)
            save_file_path = os.path.join(save_path, dirname, filename)

            entry = process_single_file(file, save_file_path, filename)
            if entry:
                final.append(entry)

        df = pd.DataFrame(final)
        logger.info("saving...")
        pkl_filename = os.path.join(save_pkl, dirname, f"{dirname}.pkl")
        df.to_pickle(pkl_filename)



def split_data(name):  # 根据.pkl总文件分出训练集何测试机
    # path = "./data/pkl/mutation_dataset/" + name + "/" + name + "_new.pkl"
    path = f"./data/pkl/original_dataset/{name}/{name}_new.pkl"
    # path = "./data/pkl/vulcnn/final_sub_original_dataset/" + name + "/" + name + ".pkl"
    save_dir = os.path.dirname(path) + "/"
    ensure_directory_exists(save_dir)

    df_all = load_data(path)
    seed = 0
    kfold_num = 10
    train_dict = {i: {} for i in range(kfold_num)}
    test_dict = {i: {} for i in range(kfold_num)}

    from sklearn.model_selection import KFold
    kf = KFold(n_splits=kfold_num, shuffle=True, random_state=seed)

    # Get unique values and create splits more efficiently
    unique_vals = df_all['val'].unique()
    for val in unique_vals:
        df_subset = df_all[df_all.val == val]
        for epoch, (train_idx, test_idx) in enumerate(kf.split(df_subset)):
            train_dict[epoch][val] = df_subset.iloc[train_idx]
            test_dict[epoch][val] = df_subset.iloc[test_idx]

    train_all = {i: pd.concat(train_dict[i], axis=0, ignore_index=True) for i in train_dict}
    test_all = {i: pd.concat(test_dict[i], axis=0, ignore_index=True) for i in test_dict}

    save_data(os.path.join(save_dir, "train.pkl"), train_all)
    save_data(os.path.join(save_dir, "test.pkl"), test_all)



def generate_vulcnn_dataframe(dataset_name): # vulcnn image generation的下一步处理
    input_path = "./data/joren/vulcnn_seq_s2v/sub_original_dataset/"
    save_path = "./data/pkl/vulcnn/sub_original_dataset/"
    input_path = input_path if input_path[-1] != "/" else input_path
    save_path = save_path if save_path[-1] != "/" else save_path

    vul_type = dataset_name
    tem_save_path = os.path.join(save_path, vul_type)
    ensure_directory_exists(tem_save_path)

    dic = []
    dicname = os.path.join(input_path, vul_type)
    filename = glob.glob(os.path.join(dicname, "*.pkl"))

    for file in filename:
        data = load_data(file)
        name = os.path.basename(file).rstrip(".pkl")
        match = re.search(r'(\d+)\.c', file)
        val = int(match.group(1))
        # if 'CVE' in file:
        #     val = 1
        # else:
        #     val = 1
        dic.append({
            "filename": name,
            "length": len(data[0]),
            "data": data,
            "val": val
        })

    final_dic = pd.DataFrame(dic)
    save_data(os.path.join(tem_save_path, f"{vul_type}.pkl"), final_dic)


def generate_ori_pkl_vulinject(dataset_name):  # 预处理 符号化vulinject数据
    path = f"/home/VulInject/experiments/binary_models/data/{dataset_name}/"  # c文件
    save_path = f"./data/source_code/sub_original_dataset/"
    save_pkl = f"./data/pkl/sub_original_dataset/{dataset_name}/"
    final = []
    vul, nonvul = 0, 0

    # Get all filenames
    all_files = os.listdir(path)

    for file in all_files:
        file_path = os.path.join(path, file)

        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                code = f.read()
            code = re.sub(r'(?<!:)//[^\n]*|/\*[\s\S]*?\*/', "", code).strip()
        except UnicodeDecodeError:
            logger.warning(f"Could not decode file: {file_path}")
            continue
        except FileNotFoundError:
            logger.warning(f"File not found: {file_path}")
            continue
        except Exception as e:
            logger.warning(f"Error reading file {file_path}: {str(e)}")
            continue

        ensure_directory_exists(os.path.join(save_path, dataset_name))
        ensure_directory_exists(save_pkl)
        savepath = os.path.join(save_path, dataset_name, file)

        with open(savepath, "w", encoding='utf-8') as temp_file:
            temp_file.write(code)

        org_code, nor_code = process_code_with_clean_gadget(code, savepath)

        with open(savepath, "r", encoding='utf-8') as temp_file:
            nor_code_str = temp_file.read()

        # match = re.search(r'(\d+)\.c', file)
        # val = int(match.group(1)) if match else 0


        final.append({"filename": file, "code": code, "subcode": nor_code_str, "val": 1})

    df = pd.DataFrame(final)
    logger.info("saving...")
    logger.info(f"vul: {vul}")
    logger.info(f"nonvul: {nonvul}")
    pkl_filename = os.path.join(save_pkl, f"{dataset_name}.pkl")
    logger.info(f"Saving to: {pkl_filename}")
    df.to_pickle(pkl_filename)

if __name__ == "__main__":

    for dataset_name in ['primevul_train','primevul_test','vgx_0_5000']:
       generate_ori_pkl_vulinject(dataset_name) 
  #     generate_vulcnn_dataframe(dataset_name)


    