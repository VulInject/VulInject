import networkx as nx
import numpy as np
import argparse
import os
import sent2vec
import pickle
import glob
from multiprocessing import Pool
from functools import partial

# Define global variables for use by subprocesses
global_model = None

def parse_options():
    parser = argparse.ArgumentParser(description='Image-based Vulnerability Detection.')
    parser.add_argument('-i', '--input', help='The input dir path of pdg dataset.', default="/root/data/qm_data/issta2022/data/joren/pdgs/original_dataset/reveal/")
    parser.add_argument('-o', '--out', help='The output dir path of image dataset.', default="/root/data/qm_data/issta2022/data/pkl/vulcnn/original_dataset/reveal/")
    parser.add_argument('-m', '--model', help='The model trained path.', default="/root/data/qm_data/issta2022/data/sent2vec_model/ori_data_model.bin")
    args = parser.parse_args()
    return args

def graph_extraction(dot):
    try:
        graph = nx.drawing.nx_pydot.read_dot(dot)
        return graph
    except Exception as e:
        print(f"Failed to read dot file {dot}: {e}")
        return None

def sentence_embedding(sentence):
    # Use global model
    global global_model
    if global_model is None:
        return np.zeros(1) 
    # embed_sentence returns a list, take the first element
    emb = global_model.embed_sentence(sentence)
    return emb[0]

def image_generation(dot):
    try:
        pdg = graph_extraction(dot)
        if pdg is None:
            return None
            
        labels_dict = nx.get_node_attributes(pdg, 'label')
        labels_code = dict()
        for label, all_code in labels_dict.items():
            try:
                # Add robustness handling
                if "," in all_code:
                    code = all_code[all_code.index(",") + 1:-2].split('\\n')[0]
                else:
                    code = all_code.split('\\n')[0]
                code = code.replace("static void", "void")
                labels_code[label] = code
            except:
                continue
    
        degree_cen_dict = nx.degree_centrality(pdg)
        closeness_cen_dict = nx.closeness_centrality(pdg)
    
        G = nx.DiGraph()
        G.add_nodes_from(pdg.nodes())
        G.add_edges_from(pdg.edges())
        katz_cen_dict = nx.katz_centrality(G) 
    
        degree_channel = []
        closeness_channel = []
        katz_channel = []
        
        for label, code in labels_code.items():
            line_vec = sentence_embedding(code)
            line_vec = np.array(line_vec)
            
            if label in degree_cen_dict:
                degree_cen = degree_cen_dict[label]
                degree_channel.append(degree_cen * line_vec)
        
                closeness_cen = closeness_cen_dict[label]
                closeness_channel.append(closeness_cen * line_vec)
        
                katz_cen = katz_cen_dict[label]
                katz_channel.append(katz_cen * line_vec)
    
        return (degree_channel, closeness_channel, katz_channel)
    except Exception as e:
        print(f"Error processing {dot}: {e}")
        return None

def write_to_pkl(dot, out, existing_files):
    dot_name = os.path.basename(dot).split('.dot')[0]
    if dot_name in existing_files:
        return None
    else:
        channels = image_generation(dot)
        if channels is None:
            return None
        else:
            (degree_channel, closeness_channel, katz_channel) = channels
            out_pkl = os.path.join(out, dot_name + '.pkl')
            data = [degree_channel, closeness_channel, katz_channel]
            with open(out_pkl, 'wb') as f:
                pickle.dump(data, f)

def image_generation_main(dir_name_sub, path="sub_mutation_dataset"):
    # Path concatenation
    base_dir = "./data/joren/pdgs/" + path + "/" + dir_name_sub
    out_path = "./data/joren/vulcnn_seq_s2v/" + path + "/" + dir_name_sub
    trained_model_path = "./data/sent2vec_model.bin" # Ensure path is correct
    
    print(f"Input: {base_dir}")
    print(f"Output: {out_path}")

    if not os.path.exists(base_dir):
        print(f"Directory not found: {base_dir}")
        return

    if not os.path.exists(out_path):
        os.makedirs(out_path)
        
    dotfiles = glob.glob(os.path.join(base_dir, '*.dot'))
    existing_files = glob.glob(os.path.join(out_path, "*.pkl"))
    existing_files = set([os.path.basename(f).split('.pkl')[0] for f in existing_files])

    print(f"Found {len(dotfiles)} dot files. Processing...")

    # Load model
    global global_model
    print("Loading Sent2Vec model...")
    try:
        # 【Fix point】Changed from Sent2VecModel to Sent2vecModel (lowercase v)
        global_model = sent2vec.Sent2vecModel()
        global_model.load_model(trained_model_path)
    except AttributeError as e:
        print(f"Code attribute name error: {e}")
        print("Please check the version of sent2vec library, try using dir(sent2vec) to view correct class names.")
        exit(1)
    except Exception as e:
        print(f"Model loading failed: {e}")
        exit(1)

    # Process with 16 processes
    with Pool(16) as pool:
        pool.map(partial(write_to_pkl, out=out_path, existing_files=existing_files), dotfiles)

if __name__ == '__main__':
    # 【Fix point】Check also changed to Sent2vecModel (lowercase v)
    if not hasattr(sent2vec, 'Sent2vecModel'):
        print("CRITICAL ERROR: module 'sent2vec' has no attribute 'Sent2vecModel'")
        print("Currently detected attributes:", dir(sent2vec))
        exit(1)

    for path in ["sub_original_dataset"]:
        for dir_sub in ['SARD_5000_PRIMEVUL']:
            image_generation_main(dir_sub, path)