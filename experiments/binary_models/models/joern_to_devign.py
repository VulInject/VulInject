import networkx as nx
import pickle  # 添加pickle导入
from gensim.models import KeyedVectors
import warnings
import argparse
import glob
from multiprocessing import Pool
from functools import partial
import numpy as np
import json
import os
import html
import re

warnings.filterwarnings("ignore")
cnt = 0

def tokenize_code_line(line):
    # Sets for operators
    operators3 = {'<<=', '>>='}
    operators2 = {
        '->', '++', '--', '!~', '<<', '>>', '<=', '>=', '==', '!=', '&&', '||',
        '+=', '-=', '*=', '/=', '%=', '&=', '^=', '|='
    }
    operators1 = {
        '(', ')', '[', ']', '.', '+', '-', '*', '&', '/', '%', '<', '>', '^', '|',
        '=', ',', '?', ':', ';', '{', '}', '!', '~'
    }

    tmp, w = [], []
    i = 0
    if type(i) == None:
        return []
    while i < len(line):
        # Ignore spaces and combine previously collected chars to form words
        if line[i] == ' ':
            tmp.append(''.join(w).strip())
            tmp.append(line[i].strip())
            w = []
            i += 1
        # Check operators and append to final list
        elif line[i:i + 3] in operators3:
            tmp.append(''.join(w).strip())
            tmp.append(line[i:i + 3].strip())
            w = []
            i += 3
        elif line[i:i + 2] in operators2:
            tmp.append(''.join(w).strip())
            tmp.append(line[i:i + 2].strip())
            w = []
            i += 2
        elif line[i] in operators1:
            tmp.append(''.join(w).strip())
            tmp.append(line[i].strip())
            w = []
            i += 1
        # Character appended to word list
        else:
            w.append(line[i])
            i += 1
    if (len(w) != 0):
        tmp.append(''.join(w).strip())
        w = []
    # Filter out irrelevant strings
    tmp = list(filter(lambda c: (c != '' and c != ' '), tmp))
    return tmp

def joern_to_devign(dot_pdg, word_vectors, out_path,real_test=False):
    out_path = out_path + dot_pdg.split("/")[-2]+'/'
    if not os.path.exists(out_path):
        os.makedirs(out_path, exist_ok=True)
    name = dot_pdg.split('/')[-1]
    out_json = out_path + name + '.json'
    if os.path.exists(out_json):
        print("-----> has been processed :\t", out_json)
        return
    print("===============\t"+dot_pdg)
    if real_test:
        vul=2
    else:
        match = re.search(r'(\d+)\.c', name)
        val = int(match.group(1))
        vul = val
        
        #vul = 1
    node_index = dict()
    node_feature = dict()
    try:
        pdg = nx.drawing.nx_pydot.read_dot(dot_pdg)

        if type(pdg) != None and pdg.nodes():
            for index, node in enumerate(pdg.nodes()):
                node_index[node] = index
                label = pdg.nodes[node]['label'][1:-1]
                decode_code = html.unescape(label)
                # print(decode_code)
                code=decode_code[decode_code.index(',')+1:-1].strip()
                # print(code)
                feature = np.array([0.0 for i in range(128)])
                #feature = np.array([0.0 for i in range(169)])
                for token in tokenize_code_line(code):
                    if token in word_vectors:
                        feature += np.array(word_vectors[token])
                    else:
                        feature += np.array([0.0 for i in range(128)])
                        # print(token)
                        # feature += np.array([0.0 for i in range(128)])
                node_feature[index] = feature

            nodes_ = []
            for i in range(len(list(pdg.nodes()))):
                nodes_.append(list(node_feature[i]))

            edges_ = []
            for item in pdg.adj.items():
                s = item[0]
                for edge_relation in item[1]:
                    d = edge_relation    
                    ddg_flag = 0
                    cdg_flag = 0 
                    for edge in item[1]._atlas[edge_relation].items():
                        if 'DDG' in edge[1]['label'] and ddg_flag == 0:
                            edge_type = 0
                            ddg_flag = 1
                            edges_.append((node_index[s], edge_type, node_index[d]))
                        elif 'CDG' in edge[1]['label'] and cdg_flag == 0:
                            edge_type = 1
                            cdg_flag = 1
                            edges_.append((node_index[s], edge_type, node_index[d]))

            data = dict()
            data['node_features'] = nodes_
            data['graph'] = edges_
            data['target'] = vul
            out_json = out_path + name + '.json'
            with open(out_json, 'w') as f:
                f.write(json.dumps(data))  
    except Exception as e:
        print(e)
        pass
    return 

def joern_to_devign_main(datasetnames, real_test=False):
    if isinstance(datasetnames, str):
        datasetnames = [datasetnames]

    for datasetname in datasetnames:
        dir_path_list = [f"/home/VulInject/experiments/binary_models/models/data/joren/pdgs/sub_original_dataset/{datasetname}/"]
        
        for dir_path in dir_path_list:
            out_path = "/home/VulInject/experiments/binary_models/models/data/devign_pdg_new/" + dir_path.split("/")[-2] + "/"
            if not os.path.exists(out_path):
                os.makedirs(out_path, exist_ok=True)
            dir_path = dir_path + "/" if dir_path[-1] != "/" else dir_path
            dots = glob.glob(dir_path + '*.dot')
            
            # 使用pickle加载词向量模型文件
            word_vectors_path = '/home/VulInject/experiments/binary_models/models/data/word2vec_model/word_vectors_128d.pkl'
            print(f"Loading word vectors from: {word_vectors_path}")
            
            try:
                with open(word_vectors_path, 'rb') as f:
                    word_vectors = pickle.load(f)
                print(f"Word vectors loaded successfully. Vocabulary size: {len(word_vectors)}")
                print(f"Sample keys: {list(word_vectors.key_to_index.keys())[:10]}")
            except FileNotFoundError:
                print(f"Error: Word vectors file not found at {word_vectors_path}")
                print("Please make sure the file exists or train the model first.")
                return
            except Exception as e:
                print(f"Error loading word vectors: {e}")
                return
            
            pool = Pool(16)
            pool.map(partial(joern_to_devign, word_vectors=word_vectors, out_path=out_path, real_test=real_test), dots)
            pool.close()
            pool.join()

def generate_data_split(file,model_name):
    if model_name=='devign':
        data_path=f'/home/VulInject/experiments/binary_models/models/data/devign_pdg_new/{file}/{file}/'
        target_dir=f'/home/VulInject/experiments/binary_models/models/data/pkl/devign/sub_original_dataset/{file}/'
        
    elif model_name=='reveal':
        data_path=f'/home/VulInject/experiments/binary_models/models/data/save_ggnn/sub_original_dataset/{file}/'
        
        target_dir=f'/home/VulInject/experiments/binary_models/models/data/pkl/reveal/sub_original_dataset/{file}/'
    os.makedirs(target_dir,exist_ok=True)
    file_list=os.listdir(data_path)
    for i in range(10):
        with open(target_dir+f'train_{i}.txt','w+')as f1, open(target_dir+f'test_{i}.txt','w+')as f2:
            for j,filename in enumerate(file_list):
                if j%10==i:
                    f2.write(data_path+filename+'\n')
                else:
                    f1.write(data_path+filename+'\n')
       
def generate_data_split_test(file,model_name):
    if model_name=='devign':
        data_path=f'/home/VulInject/experiments/binary_models/models/data/devign_pdg_new/{file}/{file}/'
        target_dir=f'/home/VulInject/experiments/binary_models/models/data/pkl/devign/sub_original_dataset/{file}/'
        
    elif model_name=='reveal':
        data_path=f'/home/VulInject/experiments/binary_models/models/data/save_ggnn/sub_original_dataset/{file}/'
        
        target_dir=f'/home/VulInject/experiments/binary_models/models/data/pkl/reveal/sub_original_dataset/{file}/'
    os.makedirs(target_dir,exist_ok=True)
    file_list=os.listdir(data_path)

    with open(target_dir+'test.txt','w+')as f1:
        for j,filename in enumerate(file_list):
            f1.write(data_path+filename+'\n')               
    
if __name__ == '__main__':
    os.chdir("/home/VulInject/experiments/binary_models/models")
    #datasetnames = ['VULINJECT_5000_PRIMEVUL','SARD_5000_PRIMEVUL']
    datasetnames = ['vgx_0_5000_primevul','primevul_train','primevul_test','vulgen_5000_primevul','vgx_1_5000_primevul']
    #datasetnames= ['VGX_0_7500_PRIME','PRIME_TRAIN','PRIME_TEST']
    joern_to_devign_main(datasetnames, real_test=False)
    