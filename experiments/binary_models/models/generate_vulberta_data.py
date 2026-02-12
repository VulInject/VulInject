from tokenizers.pre_tokenizers import PreTokenizer
from tokenizers import NormalizedString,PreTokenizedString
from typing import List 
from tokenizers import Tokenizer
from tokenizers import normalizers
from tokenizers.normalizers import StripAccents, Replace
from tokenizers.processors import TemplateProcessing
from tokenizers import processors
from tokenizers.models import BPE
from clang import *
import tqdm, re, pickle, os
from collections import Counter
import pandas as pd

def load_data(filename):
    print("loading data from:", filename)
    f = open(filename, 'rb')
    data = pickle.load(f)
    f.close()
    return data

def cleaner(code):
    ## Remove code comments
    pat = re.compile(r'(/\*([^*]|(\*+[^*/]))*\*+/)|(//.*)')
    code = re.sub(pat,'',code)
    code = re.sub('\n','',code)
    code = re.sub('\t','',code)
    return(code)

def encode(funcs):
    encodings = []
    for func in tqdm.tqdm(funcs, desc="encode"):
        encodings.append(my_tokenizer.encode(func))
    return encodings


def sava_data(filename, data):
    print("saving data to: ", filename)
    f = open(filename, 'wb')
    pickle.dump(data, f)
    f.close()

class MyTokenizer:    
    cidx = cindex.Index.create()
    def clang_split(self, i: int, normalized_string: NormalizedString) -> List[NormalizedString]:
        ## Tokkenize using clang
        tok = []
        tu = self.cidx.parse('tmp.c',
                       args=[''],  
                       unsaved_files=[('tmp.c', str(normalized_string.original))],  
                       options=0)
        for t in tu.get_tokens(extent=tu.cursor.extent):
            spelling = t.spelling.strip()
            
            if spelling == '':
                continue
            tok.append(NormalizedString(spelling))
        return(tok)    
    def pre_tokenize(self, pretok: PreTokenizedString):
        pretok.split(self.clang_split)

vocab, merges = BPE.read_file("/home/VulInject/experiments/binary_models/VulBERTa/tokenizer/drapgh-vocab.json", "/home/VulInject/experiments/binary_models/VulBERTa/tokenizer/drapgh-merges.txt")
my_tokenizer = Tokenizer(BPE(vocab, merges, unk_token="<unk>"))
my_tokenizer.normalizer = normalizers.Sequence([StripAccents(), Replace(" ", "Ä")])
my_tokenizer.pre_tokenizer = PreTokenizer.custom(MyTokenizer())
my_tokenizer.post_processor = processors.ByteLevel(trim_offsets=False)
my_tokenizer.post_processor = TemplateProcessing(
    single="<s> $A </s>",
    special_tokens=[
    ("<s>",0),
    ("<pad>",1),
    ("</s>",2),
    ("<unk>",3),
    ("<mask>",4)
    ]
)
my_tokenizer.enable_truncation(max_length=1024)
my_tokenizer.enable_padding(direction='right', pad_id=1, pad_type_id=0, pad_token='<pad>', length=1024, pad_to_multiple_of=None)




def generate_data(file, save_dir, file_val):
    if not os.path.exists(save_dir): os.makedirs(save_dir)
    df = load_data(os.path.join(file, file_val + ".pkl"))
    df.subcode = df.code.apply(lambda x : my_tokenizer.encode(cleaner("".join(x))).ids)
    sava_data(os.path.join(save_dir, file_val + ".pkl"), df)




def main():
    path = "./data/pkl"
    save_path = "./data/pkl/vulroberta"
    for dataset_type in["sub_original_dataset"]:
        for file_val in  ['primevul_train','primevul_test']:
            generate_data(os.path.join(path, dataset_type, file_val), os.path.join(save_path, dataset_type, file_val), file_val)



if __name__ == "__main__":
    main()