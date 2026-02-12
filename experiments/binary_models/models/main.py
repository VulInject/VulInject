import os
import random
import torch
import time
import json
import pickle
import joblib
import numpy as np
import pandas as pd
from data_loader.dataset import DataSet
from data_loader.graph_dataset import DataSet_reveal
from model.CodeBert import CodeBert_Classifier, Bert_Classifier
from model.VulRoberta import Roberta_Classifier
from model.Code2vec import Code2vec_Classifier
from model.VulCNN import VULCNN_Classifier  # train relies entirely on this one
from model.Lstm import LSTM_Classifier
from model.Gru import GRU_Classifier
from model.TextCNN import TextCNN_Classifier
from model.devign import Devign_Classifier, DevignModel
from model.reveal import Reveal_Classifier
from model.score import sava_data, load_data
from tqdm import tqdm
from sklearn.utils import resample
from sklearn.model_selection import KFold

os.environ["CUDA_LAUNCH_BLOCKING"] = "0.1"

def set_seed(cuda_num = "0"):
    seed = 2022
    random.seed(seed)
    os.environ['PYHTONHASHSEED'] = str(seed)
    np.random.seed(seed)
    torch.manual_seed(seed)
    torch.cuda.manual_seed(seed)
    torch.backends.cudnn.deterministic = True
    os.environ["CUDA_VISIBLE_DEVICES"] = cuda_num

def train_code2vec(**kw):
    classifier = Code2vec_Classifier(
        file = kw["file"],
        item_num = kw["item_num"],
        epochs=kw["epoch"],
        batch_size = kw["batch_size"], 
        learning_rate = kw["lr"])
    if not kw["evaluate"]:
        datapath = "./data/pkl/code2vec/sub_original_dataset/" + kw["file"]
        outputpath = "./result/code2vec/sub_original_dataset/" + kw["file"]
        train_df = open(datapath+ "/" + kw["file"] + "_" + str(kw["item_num"]) + ".train.c2v", "r").readlines()
        test_df = open(datapath + "/" + kw["file"] + "_" + str(kw["item_num"]) + ".test.c2v", "r").readlines()
        classifier.preparation(train_df = train_df, test_df = test_df, result_save_path = outputpath)
        classifier.train()
    else:
        all_result = kw["all_result"]
        row_name = "Code2vec_" + kw["file"]
        if row_name not in all_result: all_result[row_name] = {}
        model_path = get_model_path("code2vec")
        classifier.model.load_state_dict(torch.load(model_path[kw["file"]]))
        for file_val in ["ffmpeg", "qemu", "reveal"]:
            for dataset_type in["sub_original_dataset", "sub_mutation_dataset"]:
                datapath = "./data/pkl/code2vec/" + dataset_type + "/" + file_val
                outputpath = "./result/code2vec/sub_original_dataset/" + kw["file"]
                if file_val == kw["file"] and dataset_type == "original_dataset":
                    train_df = open(datapath+ "/" + file_val + "_" + str(kw["item_num"]) + ".train.c2v", "r").readlines()
                    test_df = open(datapath + "/" + file_val + "_" + str(kw["item_num"]) + ".test.c2v", "r").readlines()
                else:
                    train_df = open(datapath + "/" + file_val + ".data.c2v", "r").readlines()
                    test_df = train_df
                classifier.preparation(train_df = train_df, test_df = test_df, result_save_path = outputpath)
                start = time.time()
                _, score_dict = classifier.eval()
                end = time.time()
                score_dict["time"] = format(end-start, '.3f')
                col_name = "ori" + "_" + file_val if "ori" in dataset_type else "mut" + "_" + file_val
                all_result[row_name][col_name] = score_dict
        all_result_pd = pd.DataFrame(all_result)
        sava_data("./result/all_result.pkl", all_result_pd)
        sava_data("./result/all_result_dict.pkl", all_result)
        return all_result


def train_vulroberta(**kw):
    classifier = Roberta_Classifier(
            item_num = kw["item_num"], 
            epochs=kw["epoch"], 
            batch_size = kw["batch_size"], 
            learning_rate = kw["lr"])
    if not kw["evaluate"]:
        datapath = "./data/pkl/vulroberta/sub_original_dataset/" + kw["file"]
        outputpath = "./result/vulroberta/sub_original_dataset/" + kw["file"]
        train_df, test_df = get_kfold_dataframe(pathname = datapath, item_num = kw["item_num"], file = kw["file"])
        classifier.preparation(train_df = train_df, test_df = test_df, result_save_path = outputpath)
        classifier.train()
    else:
        all_result = kw["all_result"]
        row_name = "VulRoberta_" + kw["file"]
        if row_name not in all_result: all_result[row_name] = {}
        model_path=''

        classifier.model.load_state_dict(torch.load(model_path))
        for file_val in ["real_test"]:
            for dataset_type in["sub_original_dataset"]:
                datapath = "./data/pkl/vulroberta/" + dataset_type + "/" + file_val
                outputpath = "./result/vulroberta/sub_original_dataset/" + kw["file"]
                function_kfold_name = get_kfold_dataframe if file_val == kw["file"] and dataset_type == "sub_original_dataset" else get_kfold_dataframe_evaluate
                train_df, test_df = function_kfold_name(pathname = datapath, item_num = kw["item_num"], file = file_val)
                test_df = load_data("/root/models/data/pkl/vulroberta/sub_original_dataset/vulinject_cve/vulinject_cve.pkl")
                classifier.preparation(train_df = train_df, test_df = test_df, result_save_path = outputpath)
                start = time.time()
                _, score_dict,file_dict = classifier.eval()
                end = time.time()
                score_dict["time"] = format(end-start, '.3f')
                col_name = "ori" + "_" + file_val if "ori" in dataset_type else "mut" + "_" + file_val
                all_result[row_name][col_name] = score_dict
        with open("./result/all_result_dict.json",'w+')as f:
            json.dump(all_result,f,indent=4)   
        return all_result,file_dict

def train_code_bert(**kw):
    kw["nclass"] = 2
    kw["batch_size"] = 64
    kw["dim"] = 128
    classifier = CodeBert_Classifier(
            item_num = kw["item_num"], 
            epochs=kw["epoch"], 
            hidden_size = kw["dim"], 
            nclass = kw["nclass"],
            batch_size = kw["batch_size"], 
            learning_rate = kw["lr"], 
            max_len = 256)
    if not kw["evaluate"]:
        datapath = "./data/pkl/sub_original_dataset/" + kw["file"]
 
        outputpath = "./result/codebert/sub_original_dataset/" + kw["file"]

        train_df, test_df = get_kfold_dataframe(pathname = datapath, item_num = kw["item_num"], file = kw["file"])
        classifier.preparation(train_df = train_df, test_df = test_df, result_save_path = outputpath, sub_or_not = kw["sub_or_not"])
        classifier.train()
    else:
  
        all_result = kw["all_result"]
        row_name = "CodeBert_" + kw["file"]
        if row_name not in all_result: all_result[row_name] = {}
        model_path = '/root/models/result/codebert/sub_original_dataset/PRIME_TRAIN/model/0_bat64_dim128_lr2e-05_epo4.pt'
        classifier.model.load_state_dict(torch.load(model_path))
        for file_val in ["PRIME_TRAIN"]:
            for dataset_type in["sub_original_dataset"]:
                datapath = "./data/pkl/" + dataset_type + "/" + file_val
                if not kw["sub_or_not"]:
                    outputpath = "./result/codebert/sub_original_dataset/" + kw["file"]
                else:
                    outputpath = "./result/codebert/original_dataset/" + kw["file"]
                function_kfold_name = get_kfold_dataframe if file_val == kw["file"] and dataset_type == "sub_original_dataset" else get_kfold_dataframe_evaluate
                train_df, test_df = function_kfold_name(pathname = datapath, item_num = kw["item_num"], file = file_val)
                test_df = load_data("./data/pkl/sub_original_dataset/PRIME_TRAIN/test_new.pkl")
                classifier.preparation(train_df = train_df, test_df = test_df, result_save_path = outputpath, sub_or_not = kw["sub_or_not"])
                start = time.time()
                _, score_dict,file_dict = classifier.eval()
                end = time.time()
                score_dict["time"] = format(end-start, '.3f')
                col_name = "ori" + "_" + file_val if "ori" in dataset_type else "mut" + "_" + file_val
                all_result[row_name][col_name] = score_dict
        with open("./result/all_result_dict.json",'w+')as f:
            json.dump(all_result,f,indent=4)
        return all_result,file_dict

def train_vulcnn(**kw):
    kw["dim"] = 128
    kw["batch_size"] = 128
    classifier = VULCNN_Classifier(
        item_num = kw["item_num"],
        epochs = kw["epoch"],
        hidden_size = kw["dim"],
        batch_size = kw["batch_size"],
        learning_rate = kw["lr"]
    )

    # ============= Training phase =============
    if not kw["evaluate"]:
        datapath = "./data/pkl/vulcnn/sub_original_dataset/" + kw["file"]
        outputpath = "./result/vulcnn/sub_original_dataset/" + kw["file"]
        train_df, test_df = get_kfold_dataframe(
            pathname = datapath,
            item_num = kw["item_num"],
            file = kw["file"]
        )

        classifier.preparation(
            train_df = train_df,
            test_df = test_df,
            result_save_path = outputpath
        )
        classifier.train()

    # ============= Testing/Evaluation phase =============
    else:
        all_result = kw["all_result"]
        row_name = "VulCNN_" + kw["file"]
        if row_name not in all_result:
            all_result[row_name] = {}

        model_path = '/root/models/result/vulcnn/sub_original_dataset/vgx/model/0_bat128_dim128_lr0.0005_epo0.pt'
        classifier.model.load_state_dict(torch.load(model_path))
        
        # Here is just demonstrating how to evaluate different dataset_type and file_val
        for dataset_type in ["sub_original_dataset"]:
            for file_val in ["vgx"]:
                
                datapath = "./data/pkl/vulcnn/" + dataset_type + "/" + file_val
                outputpath = "./result/vulcnn/sub_original_dataset/" + kw["file"]
                
                # Dynamically select data fetching function based on conditions
                function_kfold_name = (
                    get_kfold_dataframe 
                    if file_val == kw["file"] and dataset_type == "sub_original_dataset" 
                    else get_kfold_dataframe_evaluate
                )
                train_df, test_df = function_kfold_name(
                    pathname = datapath,
                    item_num = kw["item_num"],
                    file = file_val
                )
                # Manually specifying test set here
                test_df = load_data("/root/models/data/pkl/vulcnn/sub_original_dataset/vulinject_cve/vulinject_cve_new.pkl")
                
                # Prepare data
                classifier.preparation(
                    train_df = train_df,
                    test_df = test_df,
                    result_save_path = outputpath
                )
                
                # Start testing
                start = time.time()
                _, score_dict, file_dict = classifier.eval()
                end = time.time()
                score_dict["time"] = format(end - start, '.3f')

                # Put score_dict into all_result
                col_name = "ori" + "_" + file_val if "ori" in dataset_type else "mut" + "_" + file_val
                all_result[row_name][col_name] = score_dict

                wrong_samples = file_dict.get("false_dict", [])
                if wrong_samples:
                    # You can decide filename based on requirements, example: {outputpath}_wrong_samples_{file_val}.json
                    wrong_path = f"{outputpath}_wrong_samples_{file_val}.json"
                    with open(wrong_path, 'w', encoding='utf-8') as f:
                        json.dump(wrong_samples, f, indent=4, ensure_ascii=False)
                
        with open("./result/all_result_dict.json",'w+') as f:
            json.dump(all_result, f, indent=4)

        return all_result, file_dict

def train_text(**kw):
    kw["batch_size"] = 128
    word2vec_model = "./data/word2vec_model/ori_mut_subcode_768.pkl"
    classifier = kw["function_name"](
        max_len = 256,
        item_num = kw["item_num"],
        epochs = kw["epoch"],
        batch_size = kw["batch_size"],
        learning_rate = kw["lr"],
        hidden_size = kw["dim"],
        word2vec_model = word2vec_model
    )
    if not kw["evaluate"]:
        datapath = "./data/pkl/original_dataset/" + kw["file"]   
        outputpath = "./result/" + str(kw["function_name"]).split(".")[-1].split("_")[0] + '/sub_original_dataset/'  + kw["file"]
        train_df, test_df = get_kfold_dataframe(pathname = datapath, item_num = kw["item_num"], file = kw["file"])
        classifier.preparation(
            train_df = train_df,
            test_df = test_df,
            result_save_path = outputpath
        )
        classifier.train()
    else:
        all_result = kw["all_result"]
        row_name = str(kw["function_name"]).split(".")[-1].split("_")[0] + "_" + kw["file"]
        if row_name not in all_result: all_result[row_name] = {}
        model_path = get_model_path(str(kw["function_name"]).split(".")[-1].split("_")[0])
        print("loading model:", model_path[kw["file"]])
        classifier.model.load_state_dict(torch.load(model_path[kw["file"]]))
        for file_val in ["ffmpeg", "qemu", "reveal"]:
            for dataset_type in["original_dataset", "mutation_dataset"]:
                datapath = "./data/pkl/" + dataset_type + "/" + file_val
                outputpath = "./result/" + str(kw["function_name"]).split(".")[-1].split("_")[0] + '/sub_original_dataset/'  + kw["file"]
                function_kfold_name = get_kfold_dataframe if file_val == kw["file"] and dataset_type == "original_dataset" else get_kfold_dataframe_evaluate
                train_df, test_df = function_kfold_name(pathname = datapath, item_num = kw["item_num"], file = file_val)
                classifier.preparation(
                    train_df = train_df,
                    test_df = test_df,
                    result_save_path = outputpath
                )
                start = time.time()
                _, score_dict = classifier.eval()
                end = time.time()
                score_dict["time"] = format(end-start, '.3f')
                col_name = "ori" + "_" + file_val if "ori" in dataset_type else "mut" + "_" + file_val
                all_result[row_name][col_name] = score_dict
        all_result_pd = pd.DataFrame(all_result)
        sava_data("./result/all_result.pkl", all_result_pd)
        sava_data("./result/all_result_dict.pkl", all_result)
        return all_result


def train_devign(**kw):
    epoch = kw["epoch"]
    num_steps = 8
    batch_size = 128  # 8
    graph_embed_size = 200
    
    if not kw["evaluate"]:
        input_dir = "./data/pkl/devign/sub_original_dataset/" + kw["file"]
        outputpath = "./result/devign/sub_original_dataset/" + kw["file"]
        print("loading data...")
        dataset = joblib.load(open(os.path.join(input_dir, 'final_' + str(kw["item_num"]) + '.bin'), 'rb'))
        print("loading over...")
        classifier = Devign_Classifier(dataset = dataset, graph_embed_size = graph_embed_size, 
            num_steps = num_steps, batch_size = batch_size, outputpath = outputpath, item_num = kw["item_num"], epoch = epoch, lr = kw["lr"] )
        classifier.train()
    else:
        all_result = kw["all_result"]
        row_name = "Devign_" + kw["file"]
        if row_name not in all_result: all_result[row_name] = {}
        model_path='/root/models/result/devign/sub_original_dataset/VULGEN_5000_PRIMEVUL/model/0_min_loss.bin'
        for file_val in ["VULGEN_5000_PRIMEVUL"]:
            for dataset_type in["sub_original_dataset"]:
                datapath = "./data/pkl/devign/" + dataset_type + "/" + file_val
                outputpath = "./result/devign/sub_original_dataset/" + kw["file"]
                print("loading data...")
                if file_val == kw["file"] and dataset_type == "sub_original_dataset":
                    dataset = joblib.load(open(os.path.join(datapath, 'final_' + str(kw["item_num"]) + '.bin'), 'rb'))
                else:
                    dataset = joblib.load(open(os.path.join(datapath, file_val + '.bin'), 'rb'))
                print("loading over...")
                classifier = Devign_Classifier(dataset = dataset, graph_embed_size = graph_embed_size, 
                    num_steps = num_steps, batch_size = batch_size, outputpath = outputpath, epoch = epoch, item_num = kw["item_num"], lr = kw["lr"] )
                classifier.model.load_state_dict(torch.load(model_path))
                start = time.time()
                _, score_dict,file_dict = classifier.eval()
                end = time.time()
                score_dict["time"] = format(end-start, '.3f')
                col_name = "ori" + "_" + file_val if "ori" in dataset_type else "mut" + "_" + file_val
                all_result[row_name][col_name] = score_dict
        with open("./result/all_result_dict.json",'w+')as f:
            json.dump(all_result,f,indent=4)   
        return all_result,file_dict


def devign_prepare(filename, i): # If you want to generate test dataset, replace with commented lines
    batch_size = 8
    node_tag = "node_features"
    graph_tag = "graph"
    label_tag = "target"
    input_dir = "./data/pkl/devign/sub_original_dataset/" + filename
    processed_data_path = os.path.join(input_dir, "final_" + str(i) + ".bin")
    if True and os.path.exists(processed_data_path):
        print('file already exist')
    else:
        dataset = DataSet(train_src=os.path.join(input_dir, 'train_' + str(i) + '.txt'),
                            valid_src=None,
                            test_src=os.path.join(input_dir, 'test_' + str(i) + '.txt'),
                            batch_size=batch_size, n_ident=node_tag, g_ident=graph_tag,
                            l_ident=label_tag)
        file = open(processed_data_path, 'wb')
        joblib.dump(dataset, file)
        file.close()



def save_ggnn(model, dataset, save_path):
    cnt=1

    pbar=tqdm(total=len(dataset.train_batches)*dataset.batch_size)
    while len(dataset.train_batches) !=0 :

        model.eval()
        model.zero_grad()
        graph, targets = dataset.get_next_train_batch()
        targets = targets.long()
        targets = torch.LongTensor(targets).cuda()
        outputs = model(graph, cuda=True,get_feature=True)
        outputs = outputs.detach().cpu().tolist()
        for i,pdg in enumerate(graph.subpdg):
            all_features = np.array(outputs[i])  # Convert list to NumPy array
            sum_feature = np.sum(all_features, axis=0)
            json_dict = { 
            'graph_feature':sum_feature.tolist(),
            'target':pdg.label
            }
            
            file_path = os.path.join(save_path, pdg.name)
            with open(file_path, 'w+', encoding='utf-8') as fp:
                json.dump(json_dict, fp)
            pbar.update(1)

def main():
    epoch = 30
    dim = 768
    evaluate = False
    sub_or_not = False
    set_seed()
    for item_num in [0]:
        for lr in [5e-5]:
            for file in ['primevul_train']:
                #train_code_bert(item_num = item_num, file = file, epoch = epoch, lr = 2e-5, evaluate = evaluate, sub_or_not = sub_or_not)
                #train_vulcnn(item_num = item_num, file = file, epoch = epoch, lr = 0.0005, evaluate = evaluate, sub_or_not = sub_or_not)
                train_vulroberta(item_num = item_num, file = file, evaluate = False, epoch = epoch, lr = 2e-5, batch_size = 64)
                #train_devign(item_num = item_num, file = file, evaluate = evaluate, epoch = epoch, lr = 0.0005)
                #train_reveal(item_num = item_num, file = file, evaluate = evaluate, epoch = epoch, lr = 0.0005)
                


if __name__ == "__main__":
    main()  # Call main function
    #for file in ['primevul_train','vgx_1_5000','vulgen_5000','sard_5000','vulinject_5000']:
     
     #   devign_prepare(file,0)
    #devign_prepare("PRIMEVUL_TRAIN",0)