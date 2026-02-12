import torch
from torch.utils.data import Dataset, DataLoader
import json
from transformers import AutoTokenizer,AutoModelForSequenceClassification,RobertaForSequenceClassification,AutoConfig
import sklearn
from torch.cuda.amp import autocast
from tqdm import tqdm
from transformers import get_linear_schedule_with_warmup
from torch.optim import AdamW
import numpy as np
from sklearn.metrics import confusion_matrix, accuracy_score, precision_score, recall_score, f1_score,roc_auc_score  
import os
from transformers import RobertaTokenizer,RobertaModel
from torch import nn
import torch.nn.functional as F
import pandas as pd
import numpy as np
import sklearn
from clang import *
from clang import cindex
from pathlib import Path
from tokenizers import ByteLevelBPETokenizer
from tokenizers.implementations import ByteLevelBPETokenizer
from tokenizers.processors import BertProcessing
from torch.utils.data import Dataset, DataLoader, IterableDataset
from transformers import RobertaConfig
from transformers import RobertaForMaskedLM, RobertaForSequenceClassification
from transformers import RobertaTokenizerFast
from transformers import DataCollatorForLanguageModeling
from transformers import Trainer, TrainingArguments
from transformers import LineByLineTextDataset
from transformers.modeling_outputs import SequenceClassifierOutput
from custom import CustomDataCollatorForLanguageModeling
from torch import nn
from transformers import RobertaModel
from transformers import AutoTokenizer
from tokenizers import Tokenizer
from tokenizers import normalizers,decoders
from tokenizers.normalizers import StripAccents, unicode_normalizer_from_str, Replace
from tokenizers.processors import TemplateProcessing
from tokenizers import processors,pre_tokenizers
from tokenizers.models import BPE
from tokenizers.pre_tokenizers import PreTokenizer
from tokenizers.pre_tokenizers import Whitespace
from tokenizers import NormalizedString,PreTokenizedString
from typing import List 


np.random.seed(2024)

class myCNN(nn.Module):#模型部分可以直接用，不用改
    def __init__(self, EMBED_SIZE, model_path,EMBED_DIM=50002):
        super(myCNN,self).__init__()
        
        pretrained_weights = RobertaModel.from_pretrained(model_path).embeddings.word_embeddings.weight

        self.embed = nn.Embedding.from_pretrained(pretrained_weights,
                                                  freeze=True,
                                                  padding_idx=1)

        self.conv1 = nn.Conv1d(in_channels=EMBED_DIM, out_channels=200, kernel_size=3)
        self.conv2 = nn.Conv1d(in_channels=EMBED_DIM, out_channels=200, kernel_size=4)
        self.conv3 = nn.Conv1d(in_channels=EMBED_DIM, out_channels=200, kernel_size=5)

        self.dropout = nn.Dropout(0.5)

        self.fc1 = nn.Linear(200*3,256) #500
        self.fc2 = nn.Linear(256,128)
        self.fc3 = nn.Linear(128,2)
    
    def forward(self, x):
        x = self.embed(x)
        x = x.permute(0,2,1)

        x1 = F.relu(self.conv1(x))
        x2 = F.relu(self.conv2(x))
        x3 = F.relu(self.conv3(x))
        
        x1 = F.max_pool1d(x1, x1.shape[2])
        x2 = F.max_pool1d(x2, x2.shape[2])
        x3 = F.max_pool1d(x3, x3.shape[2])
        
        x = torch.cat([x1,x2,x3],dim=1)
        
        # flatten the tensor
        x = x.flatten(1)
        
        # apply mean over the last dimension
        #x = torch.mean(x, -1)

        x = self.dropout(x)

        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return(x)

class CommitDataset(Dataset):#这个需要按照需要修改，__len__和__getitem__可以不用改
      
  def __init__(self, data_path,tokenizer,maxlen=1024):
    # self.data = kw["data"]
    # self.texts = texts
    # self.targets = targets
    cwe_list=['CWE-119','CWE-125', 'CWE-120', 'CWE-787', 'CWE-189', 'CWE-190', 'CWE-191', 'CWE-617','CWE-22','CWE-835','CWE-772','CWE-401', 'CWE-415','CWE-416','CWE-476','CWE-369']
    with open(data_path, "r")as f:
       data=json.load(f)

    self.label2id={cwe_list[i]:i for i in range(len(cwe_list))}

    self.data=[]
    self.label_list=[]
    # tokenizer.add_tokens(["[MSG]","[REM]","[ADD]"])
    self.tokenizer = tokenizer
    self.max_len = maxlen

    for commit in data:
      cwe=commit['cwe_root']
      msg=commit["commit_message"]
      # rem_code=" ".join(commit["REM_DIFF"])
      # add_code=" ".join(commit["ADD_DIFF"])
      if not msg:
        msg=" "
      # if rem_code==None:
      #   rem_code=" "
      # if add_code==None:
      #   add_code=" "
      
      # text="[REM]"+str(rem_code)+"[ADD]"+str(add_code)
      func_code = commit['func']
      # diff_code=''
      # for file in commit['files']:
      #   for change_line in file['change_lines']:
      #      diff_code+=change_line
      #      diff_code+='\n'
      # cve=commit["cve"][0]
      # text="[MSG] "+msg+'[DIFF]'+diff_code
      text="[MSG] "+msg+'[DIFF]'+func_code
      # text=diff_code
      # self.data.append({"text":text,"cwe":cwe,"label":self.label2id[cwe],'cve':cve})
      self.data.append({"text":text,"label":self.label2id[cwe]})
      self.label_list.append(self.label2id[cwe])


  def __len__(self):
    return len(self.data)

  def __getitem__(self, index):
    # m1 = self.data.iloc(list(index))
    text = self.data[index]["text"]
    label = self.data[index]["label"]
    # encoding = self.tokenizer.encode(
    #     text,
    #     add_special_tokens=True,
    #     max_length=self.max_len,
    #     return_token_type_ids=False,
    #     padding='max_length',
    #     return_attention_mask=True,
    #     return_tensors='pt',
    #     truncation=True
    # )
    encoding = self.tokenizer.encode(text)
    #print(encoding.ids)
    #print(type(encoding.ids))
    #print(type(encoding.attention_mask))
    return {
      # 'cve': self.data[index]['cve'],
      'text': text,
      'input_ids': encoding.ids,
      # 'input_ids': encoding['input_ids'].flatten(),
      # 'attention_mask': encoding['attention_mask'].flatten(),
      'attention_mask': encoding.attention_mask,
      'label': torch.tensor(label, dtype=torch.long)
    }
  def  count_num(self):
    label2num={}
    for data in self.data:
      label=data['label']
      if label not in label2num:
        label2num[label]=0
      label2num[label]+=1
    return label2num

def train(model,loss_fn_train,train_dataset,valid_dataset,batch_size=8,learning_rate=5e-5,epochs=20):
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    model.to(device)
    train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)
    valid_loader = DataLoader(valid_dataset, batch_size=batch_size, shuffle=False)
    losses = []
    labels = []
    scaler = torch.cuda.amp.GradScaler()
    
    optimizer = AdamW(model.parameters(), lr=learning_rate)
    scheduler = get_linear_schedule_with_warmup(
            optimizer,
            num_warmup_steps=3,
            num_training_steps=len(train_loader) * epochs
        )
    loss_fn_train.to(device)
    miniloss=99
    patience=0
    patience_threshold=5
    for epoch in range(epochs):
        model.train()
        progress_bar = tqdm(enumerate(train_loader), total=len(train_loader))
        for i, data in progress_bar:
            optimizer.zero_grad()
            print(data["label"])
            input_ids = torch.stack(data["input_ids"], dim=1)
            attention_mask = torch.stack(data["attention_mask"], dim=1)
            #labels = torch.stack(data["label"], dim=1)
            input_ids = input_ids.to(device)
            attention_mask = attention_mask.to(device)
            
            #input_ids = [ids.to(device) for ids in data["input_ids"]]
            #attention_mask = [atm.to(device) for atm in data["attention_mask"]]
            # labels = [lab.to(device) for lab in data["label"]]
            #input_ids = data["input_ids"].to(device)
            # print(input_ids.shape)
            #attention_mask = data["attention_mask"].to(device)
            labels = data["label"].to(device)
            with autocast():
              outputs = model(
                  input_ids=input_ids,
                  # labels=targets,
                  attention_mask=attention_mask
              )
              loss = loss_fn_train(outputs, labels)
            scaler.scale(loss).backward()
            scaler.step(optimizer)
            scaler.update()
            preds = torch.argmax(outputs, dim=1).flatten()
            # preds=(logits>=0.5).int()
            
            losses.append(loss.item())

            # torch.nn.utils.clip_grad_norm_(model.parameters(), max_norm=1.0)

            scheduler.step()
            progress_bar.set_description(
                f'loss: {loss.item():.3f}, acc : {(torch.sum(preds == labels)/len(labels)):.3f}')
        train_loss = np.mean(losses)
        print(train_loss)
        valid_loss, valid_acc,valid_f1 = evaluate(model, valid_loader, device)
        print(f'Epoch: {epoch+1} train_loss:{train_loss:.3f} valid_loss:{valid_loss:.3f} valid_acc:{valid_acc:.3f} valid_f1:{valid_f1:.3f}')
        if valid_loss<miniloss:
            patience=0
            miniloss=valid_loss
            torch.save(model.state_dict(), f'best_model.bin')
            # model.save_pretrained(f'best_model_epo{epoch}')
        else:
           patience+=1
        if patience>=patience_threshold:
           break

def evaluate(model, val_loader, device):
    model.eval()
    losses = []
    preds = []
    labels_all = []
    loss_fn=torch.nn.CrossEntropyLoss().to(device)
    with torch.no_grad():
        for data in val_loader:
            input_ids = data["input_ids"].to(device)
            attention_mask = data["attention_mask"].to(device)
            labels=data["label"].to(device)
            outputs = model(
                input_ids=input_ids,
                attention_mask=attention_mask
            )
            loss = loss_fn(outputs, labels)
            losses.append(loss.item())
            preds+=torch.argmax(outputs, dim=1).flatten().tolist()
            labels_all+=labels.flatten().tolist()
    accuracy,f1=calculate_metrics(preds, labels_all)
    return np.mean(losses), accuracy,f1


def calculate_metrics(preds, labels,test=False):
    # 计算混淆矩阵
    conf_matrix = confusion_matrix(labels, preds)

    # 计算准确率
    accuracy = accuracy_score(labels, preds)
    # auc=roc_auc_score(labels, preds, average='weighted',multi_class='ovr')
    # 假设y_true是真实标签，y_pred是模型预测的标签
    # 这里的y_true和y_pred是代表多个类别的一维数组
    f1_weighted = f1_score(labels, preds, average='weighted')
    if test:

        # 计算每个类别的精确率
        precision = precision_score(labels, preds, average=None)

        # 计算每个类别的召回率
        recall = recall_score(labels, preds, average=None)

        # 计算每个类别的F1值
        f1 = f1_score(labels, preds, average=None)


        # 输出结果
        print("F1值（加权平均）:", f1_weighted)
        print("混淆矩阵:")
        print(conf_matrix)

        print("\n准确率:", accuracy)

        print("\n精确率:")
        for i in range(len(precision)):
            print(f"类别 {i}: {precision[i]}")

        print("\n召回率:")
        for i in range(len(recall)):
            print(f"类别 {i}: {recall[i]}")

        print("\nF1值:")
        for i in range(len(f1)):
            print(f"类别 {i}: {f1[i]}")
      
    return accuracy,f1_weighted


def test(model,test_dataset):
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

    model.load_state_dict(torch.load('/home/ubuntu/commit_classify/best_model.bin'))

    # model=RobertaForSequenceClassification.from_pretrained('/home/ubuntu/commit_classify/my_awesome_model/checkpoint-615')
    # model=model_to_load
    model.eval()

    # model=AutoModelForSequenceClassification.from_pretrained('/home/ubuntu/commit_classify/my_awesome_model/checkpoint-615',num_labels=9)
    model.to(device)
    losses = []
    preds = []
    labels_all = []
    test_loader = DataLoader(test_dataset, batch_size=16, shuffle=False)
    loss_fn=torch.nn.CrossEntropyLoss().to(device)
    first=True
    with torch.no_grad():
        for data in test_loader:
            input_ids = data["input_ids"].to(device)
            attention_mask = data["attention_mask"].to(device)
            if first:
               print(input_ids,attention_mask)
               first=False
            labels=data["label"].to(device)
            outputs = model(
                input_ids=input_ids,
                attention_mask=attention_mask
            )
            loss = loss_fn(outputs, labels)
            losses.append(loss.item())
            preds+=torch.argmax(outputs, dim=1).flatten().tolist()
            labels_all+=labels.flatten().tolist()
    accuracy=calculate_metrics(preds, labels_all,test=True)
    return np.mean(losses), accuracy

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
                
            ## Keyword no need

            ## Punctuations no need

            ## Literal all to BPE
            
            #spelling = spelling.replace(' ', '')
            tok.append(NormalizedString(spelling))

        return(tok)
    
    def pre_tokenize(self, pretok: PreTokenizedString):
        pretok.split(self.clang_split) 

def main(do_train,do_test):
    max_len=1024
    # model_path='/root/cwe_predict/VulBERTa'
    model_path='/root/VulBERTa/models/VulBERTa'
    # tokenizer=AutoTokenizer.from_pretrained(model_path)
    vocab, merges = BPE.read_file(vocab="/root/VulBERTa/tokenizer/drapgh-vocab.json", merges="/root/VulBERTa/tokenizer/drapgh-merges.txt")
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

    model=AutoModelForSequenceClassification.from_pretrained(model_path,num_labels=16)
    # model=myCNN(768,model_path)#
    # train_dataset=CommitDataset('/root/cwe_predict/my_dataset/train_dataset.json',my_tokenizer,maxlen=max_len)
    # valid_dataset=CommitDataset('/root/cwe_predict/my_dataset/valid_dataset.json',my_tokenizer,maxlen=max_len)
    train_dataset=CommitDataset('/root/my_dataset/train_dataset.json',my_tokenizer,maxlen=max_len)
    valid_dataset=CommitDataset('/root/my_dataset/valid_dataset.json',my_tokenizer,maxlen=max_len)

    if do_train:
      cw = sklearn.utils.class_weight.compute_class_weight(class_weight='balanced',classes=[i for i in range(len(train_dataset.label2id))],y=train_dataset.label_list)
      c_weights = torch.FloatTensor([cw[i] for i in range(len(train_dataset.label2id))])
      loss_fn_train=torch.nn.CrossEntropyLoss(weight=c_weights)
      train(model,loss_fn_train,train_dataset,valid_dataset,epochs=20,batch_size=16,learning_rate=2e-5)
    if do_test:
      test_dataset=CommitDataset('/home/ubuntu/commit_classify/dataset/test.json',my_tokenizer,maxlen=max_len)
      test(model,test_dataset)

def split_dataset(src_path,target_path,train_lb_radio,train_ulb_radio,val_radio):
  with open(src_path,'r')as f:
    data=json.load(f)
  cwe2data={}
  for d in data:
    cwe=d['cwe_root']
    files=[]
    if cwe not in cwe2data:
      cwe2data[cwe]=[]
    for file in d['files']:
      if len(file['change_lines'])>50:
        continue
      files.append(file)
    if files==[]:
      continue
    d['files']=files
    cwe2data[cwe].append(d)
  trainset_lb=[]
  trainset_ulb=[]
  valset=[]
  testset=[]
  for cwe,data in cwe2data.items():
    np.random.shuffle(data)
    len_data=len(data)
    len_train_lb=int(len_data*train_lb_radio)
    len_train_ulb=int(len(data)*train_ulb_radio)
    len_val=int(len_data*val_radio)
    trainset_lb+=data[:len_train_lb]
    trainset_ulb+=data[len_train_lb:len_train_lb+len_train_ulb]
    valset+=data[len_train_lb+len_train_ulb:len_train_lb+len_train_ulb+len_val]
    testset+=data[len_train_lb+len_train_ulb+len_val:]
  np.random.shuffle(trainset_lb)
  np.random.shuffle(trainset_ulb)
  np.random.shuffle(valset)
  np.random.shuffle(testset)
  os.makedirs(target_path,exist_ok=True)
  with open(os.path.join(target_path,'train_lb.json'),'w')as f:
    json.dump(trainset_lb,f)
  with open(os.path.join(target_path,'train_ulb.json'),'w')as f:
    json.dump(trainset_ulb,f)
  with open(os.path.join(target_path,'val.json'),'w')as f:
    json.dump(valset,f)
  with open(os.path.join(target_path,'test.json'),'w')as f:
    json.dump(testset,f)


if __name__=="__main__":
  # os.chdir('/home/ubuntu/commit_classify')
  # src_path='/home/ubuntu/commit_classify/final_commits4.json'
  # target_path='/home/ubuntu/commit_classify/dataset'
  # split_dataset(src_path,target_path,0.4,0.4,0.1)
  main(do_test=False,do_train=True)
