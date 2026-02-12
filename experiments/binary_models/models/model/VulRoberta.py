import os
import torch
import sklearn
import numpy as np
from torch import nn
from tqdm import tqdm
import torch.nn.functional as F
from torch.utils.data import Dataset, DataLoader
from prettytable import PrettyTable
from torch.cuda.amp import autocast
from transformers import RobertaModel, AdamW, get_linear_schedule_with_warmup
from model.VulCNN import VULCNN_Classifier
from model.score import get_MCM_score

class RobertaDataset(Dataset):
    def __init__(self, **kw):
        self.data = kw["data"]

    def __len__(self):
        return len(self.data)

    def __getitem__(self, index):
        codes = self.data.subcode.iloc[index]
        target = self.data.val.iloc[index]
        return {
            'filename': self.data.filename.iloc[index],
            'codes': torch.tensor(codes, dtype=torch.long),
            'targets': torch.tensor(target, dtype=torch.long)
        }

class myCNN(nn.Module):
    def __init__(self, EMBED_SIZE, EMBED_DIM):
        super(myCNN, self).__init__()
        pretrained_weights = RobertaModel.from_pretrained('/home/VulInject_copy/experiments/binary_models/VulBERTa/models/VulBERTa').embeddings.word_embeddings.weight
        
        self.embed = nn.Embedding.from_pretrained(pretrained_weights, freeze=True, padding_idx=1)
        self.conv1 = nn.Conv1d(in_channels=EMBED_DIM, out_channels=200, kernel_size=3)
        self.conv2 = nn.Conv1d(in_channels=EMBED_DIM, out_channels=200, kernel_size=4)
        self.conv3 = nn.Conv1d(in_channels=EMBED_DIM, out_channels=200, kernel_size=5)
        self.dropout = nn.Dropout(0.5)
        self.fc1 = nn.Linear(200*3, 256)
        self.fc2 = nn.Linear(256, 128)
        self.fc3 = nn.Linear(128, 2)
    
    def forward(self, x):
        x = self.embed(x)
        x = x.permute(0, 2, 1)
        x1 = F.relu(self.conv1(x))
        x2 = F.relu(self.conv2(x))
        x3 = F.relu(self.conv3(x))
        x1 = F.max_pool1d(x1, x1.shape[2])
        x2 = F.max_pool1d(x2, x2.shape[2])
        x3 = F.max_pool1d(x3, x3.shape[2])
        x = torch.cat([x1, x2, x3], dim=1)
        x = x.flatten(1)
        x = self.dropout(x)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return x

class Roberta_Classifier(VULCNN_Classifier):
    def __init__(self, **kw):
        self.model = myCNN(50002, 768)
        self.model.embed.weight.data[1] = torch.zeros(768)
        self.device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
        self.item_num = kw["item_num"]
        self.epochs = kw["epochs"]
        self.batch_size = kw["batch_size"]
        self.learning_rate = kw["learning_rate"]
        self.model.to(self.device)
        self.hidden_size = 768
        
        self.min_val_loss = float('inf')
        self.min_loss_model_snapshot = {}

    def preparation(self, **kw):
        self.train_df = kw["train_df"]
        self.test_df = kw["test_df"]
        self.result_save_path = kw["result_save_path"]
        self.result_save_path = self.result_save_path + "/" if self.result_save_path[-1] != "/" else self.result_save_path
        model_save_path = self.result_save_path + "model/"
        if not os.path.exists(self.result_save_path): os.makedirs(self.result_save_path)
        if not os.path.exists(model_save_path): os.makedirs(model_save_path)
        
        self.result_save_path = self.result_save_path + str(self.item_num) + "_epo" + str(self.epochs) + "_bat" + str(self.batch_size) + "_dim" + str(self.hidden_size) + "_lr" + str(self.learning_rate) + ".result"
        
        self.model_save_base = model_save_path + str(self.item_num) + "_bat" + str(self.batch_size) + "_dim" + str(self.hidden_size) + "_lr" + str(self.learning_rate)
        
        self.train_set = RobertaDataset(data=self.train_df)
        self.test_set = RobertaDataset(data=self.test_df)

        self.train_loader = DataLoader(self.train_set, batch_size=self.batch_size, shuffle=True)
        self.valid_loader = DataLoader(self.test_set, batch_size=self.batch_size, shuffle=True)

        cw = sklearn.utils.class_weight.compute_class_weight(class_weight='balanced', classes=[0, 1], y=list(self.train_df.val))
        c_weights = torch.FloatTensor([cw[0], cw[1]])
        self.loss_fn = nn.CrossEntropyLoss(weight=c_weights).to(self.device)
        self.optimizer = AdamW(self.model.parameters(), lr=self.learning_rate, correct_bias=False)
        self.scheduler = get_linear_schedule_with_warmup(
            self.optimizer,
            num_warmup_steps=0,
            num_training_steps=len(self.train_loader) * self.epochs
        )

    def fit(self):
        self.model = self.model.train()
        losses = []
        labels = []
        predictions = []
        scaler = torch.cuda.amp.GradScaler()
        progress_bar = tqdm(enumerate(self.train_loader), total=len(self.train_loader))
        
        for i, data in progress_bar:
            self.optimizer.zero_grad()
            codes = data["codes"].to(self.device)
            targets = data["targets"].to(self.device)
            
            with autocast():
                outputs = self.model(codes)
                loss = self.loss_fn(outputs, targets)
            
            scaler.scale(loss).backward()
            scaler.step(self.optimizer)
            scaler.update()
            
            preds = torch.argmax(outputs, dim=1).flatten()          
            
            losses.append(loss.item())
            predictions += list(np.array(preds.cpu()))
            labels += list(np.array(targets.cpu()))

            torch.nn.utils.clip_grad_norm_(self.model.parameters(), max_norm=1.0)
            self.scheduler.step()
            progress_bar.set_description(
                f'loss: {loss.item():.3f}, acc : {(torch.sum(preds == targets)/len(targets)):.3f}')
        
        train_loss = np.mean(losses)
        score_dict = get_MCM_score(labels, predictions)
        return train_loss, score_dict

    def eval(self):
        self.model = self.model.eval()
        losses = []
        all_probs = []
        all_labels = []
        all_filenames = []
        
        progress_bar = tqdm(enumerate(self.valid_loader), total=len(self.valid_loader), desc="Inference", leave=False)

        with torch.no_grad():
            for _, data in progress_bar:
                codes = data["codes"].to(self.device)
                targets = data["targets"].to(self.device)
                filename = data["filename"]
                
                outputs = self.model(codes)
                loss = self.loss_fn(outputs, targets)
                
                probs = F.softmax(outputs, dim=1)[:, 1].flatten().cpu().numpy()
                original_targets = targets.cpu().numpy()

                losses.append(loss.item())
                
                all_probs.extend(probs)
                all_labels.extend(original_targets)
                all_filenames.extend(filename)

        val_loss = np.mean(losses)
        all_probs = np.array(all_probs)
        all_labels = np.array(all_labels)

        pred_threshold = 0.65
        temp_preds = (all_probs >= pred_threshold).astype(int)
        temp_score = get_MCM_score(all_labels, temp_preds)
        epoch_results_dict = {pred_threshold: temp_score}
        
        default_preds = (all_probs >= 0.65).astype(int)
        file_dict = {}
        for file, pred, new_label in zip(all_filenames, default_preds, all_labels):
            file_dict[file] = {'pred': int(pred), 'label': int(new_label)}
        
        return val_loss, epoch_results_dict, file_dict

    def train(self):
        eval_threshold = 0.65
        print(f"Start Training for {self.epochs} epochs...")
        
        for epoch in range(self.epochs):
            print(f'\nEpoch {epoch + 1}/{self.epochs}')
            
            train_loss, train_score = self.fit()
            val_loss, all_threshold_scores, _ = self.eval()
            
            save_msg = ""
            if val_loss < self.min_val_loss:
                self.min_val_loss = val_loss
                
                save_name = self.model_save_base + "_best_model.pt"
                torch.save(self.model.state_dict(), save_name)
                
                self.min_loss_model_snapshot = all_threshold_scores
                
                save_msg = f"  >>> New best model saved!"
            
            print(f"Train Loss: {train_loss:.4f} | Val Loss: {val_loss:.4f}{save_msg}")

            print(f"\n{'Eval Metric':<10} | {'Value(%)':<10}")
            print("-" * 30)
            
            display_data = self.min_loss_model_snapshot if self.min_loss_model_snapshot else all_threshold_scores
            
            score_d = display_data.get(eval_threshold, {'f_score': 0, 'precision': 0, 'recall': 0})
            
            c_f1 = float(score_d.get("f_score", 0))
            c_pre = float(score_d.get("precision", 0))
            c_rec = float(score_d.get("recall", 0))
            
            print(f"F1 Score    | {c_f1:.4f}")
            print(f"Precision   | {c_pre:.4f}")
            print(f"Recall      | {c_rec:.4f}")
            print("="*30)