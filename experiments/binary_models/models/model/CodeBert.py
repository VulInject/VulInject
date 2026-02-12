import os
import torch
import numpy as np
from torch import nn
from tqdm import tqdm
from torch.utils.data import Dataset, DataLoader
from prettytable import PrettyTable  # Make sure to import this
from torch.cuda.amp import autocast
from transformers import RobertaConfig, RobertaTokenizerFast, BertConfig, BertTokenizer, BertForSequenceClassification
from transformers import AdamW, get_linear_schedule_with_warmup
from transformers.models.roberta.modeling_roberta import RobertaPreTrainedModel, RobertaModel
from model.VulCNN import VULCNN_Classifier
from model.score import get_MCM_score

# Dataset class remains unchanged
class CodeBertDataset(Dataset):
    def __init__(self, **kw):
        self.data = kw["data"]
        print(f"DEBUG: Column names of dataset: {self.data.columns.tolist()}")
        self.tokenizer = kw["tokenizer"]
        self.max_len = kw["max_len"]
        self.sub_or_not = kw["sub_or_not"]

    def __len__(self):
        return len(self.data)

    def __getitem__(self, index):
        text = "".join(self.data.subcode.iloc[index]) if self.sub_or_not else "".join(self.data.code.iloc[index])
        target = self.data.val.iloc[index]

        encoding = self.tokenizer.encode_plus(
            text,
            add_special_tokens=True,
            max_length=self.max_len,
            return_token_type_ids=False,
            padding='max_length',
            return_attention_mask=True,
            return_tensors='pt',
            truncation=True
        )

        return {
            'filename': self.data.filename.iloc[index],
            'text': text,
            'input_ids': encoding['input_ids'].flatten(),
            'attention_mask': encoding['attention_mask'].flatten(),
            'targets': torch.tensor(target, dtype=torch.long)
        }

# Model structure remains unchanged
class Ori_CodeBert(RobertaPreTrainedModel):
    _keys_to_ignore_on_load_missing = [r"position_ids"]

    def __init__(self, config):
        super().__init__(config)
        self.num_labels = 1
        self.config = config
        self.roberta = RobertaModel(config, add_pooling_layer=False)
        self.embedding_dim = 768
        self.hidden_dim = 128
        self.dropout = config.hidden_dropout_prob
        
        self.classifier = nn.Sequential(
            nn.Linear(self.embedding_dim, self.hidden_dim),
            nn.Dropout(self.dropout),
            nn.Linear(self.hidden_dim, 1)
        )
        self.init_weights()
        
    def forward(self, input_ids=None, attention_mask=None, **kwargs):
        outputs = self.roberta(
            input_ids,
            attention_mask=attention_mask,
            return_dict=True,
            output_attentions=True,
            output_hidden_states=True,
        )
        last_hidden_state_cls = outputs[0][:, 0, :]
        logits = self.classifier(last_hidden_state_cls)
        return logits, last_hidden_state_cls


#  CodeBert_Classifier (Loss Priority + Snapshot Mode)
# ==========================================
class CodeBert_Classifier(VULCNN_Classifier):
    def __init__(self, **kw):
        # ==========================================
        # [Modification] Load model from local path
        # ==========================================
        local_model_path = "/home/VulInject_copy/experiments/binary_models/CodeBERT"
        
        # 1. Initialize model components (load from local path)
        # Note: All three from_pretrained are changed to local_model_path
        self.config = RobertaConfig.from_pretrained(local_model_path, num_labels=1)
        self.model = Ori_CodeBert.from_pretrained(local_model_path, config=self.config)
        self.tokenizer = RobertaTokenizerFast.from_pretrained(local_model_path)
        
        # 2. Device configuration
        device_id = 1 if torch.cuda.device_count() > 1 else 0
        self.device = torch.device(f"cuda:{device_id}" if torch.cuda.is_available() else "cpu")
        self.model.to(self.device)
        
        # 3. Parameter configuration (unchanged)
        self.max_len = kw.get("max_len", 512)
        self.epochs = kw.get("epochs", 10)
        self.batch_size = kw.get("batch_size", 32)
        self.learning_rate = kw.get("learning_rate", 2e-5)
        self.item_num = kw.get("item_num", 0)
        self.hidden_size = kw.get("hidden_size", 768)

        self.loss_fn = torch.nn.BCEWithLogitsLoss().to(self.device)
        
        # Record global minimum Loss and corresponding metric snapshot
        self.min_val_loss = float('inf')
        self.min_loss_model_snapshot = {}

    def preparation(self, **kw):
        self.train_df = kw["train_df"]
        self.test_df = kw["test_df"]
        self.result_save_path = kw["result_save_path"]
        
        # Path processing
        self.result_save_path = self.result_save_path + "/" if self.result_save_path[-1]!="/" else self.result_save_path
        model_save_path_dir = self.result_save_path + "model/"        
        if not os.path.exists(self.result_save_path): os.makedirs(self.result_save_path)
        if not os.path.exists(model_save_path_dir): os.makedirs(model_save_path_dir)
        
        # Result file path
        self.result_save_path = self.result_save_path + str(self.item_num) + "_epo" + str(self.epochs) + "_bat" + str(self.batch_size) + "_dim" + str(self.hidden_size) + "_lr" + str(self.learning_rate) + ".result"
        
        # Model save base path (for train use)
        # Final save path: .../0_bat64_..._min_loss.pt
        self.model_save_base = model_save_path_dir + str(self.item_num) + "_bat" + str(self.batch_size) + "_dim" + str(self.hidden_size) + "_lr" + str(self.learning_rate)
        
        # Dataset loading
        self.train_set = CodeBertDataset(data = self.train_df, tokenizer = self.tokenizer, max_len = self.max_len, sub_or_not = kw["sub_or_not"])
        self.test_set = CodeBertDataset(data = self.test_df, tokenizer = self.tokenizer, max_len = self.max_len, sub_or_not = kw["sub_or_not"])

        self.train_loader = DataLoader(self.train_set, batch_size=self.batch_size, shuffle=True)
        self.valid_loader = DataLoader(self.test_set, batch_size=self.batch_size, shuffle=True)

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
            input_ids = data["input_ids"].to(self.device)
            attention_mask = data["attention_mask"].to(self.device)
            targets = data["targets"].to(self.device).float().unsqueeze(1)
            
            with autocast():
                outputs, _ = self.model(
                    input_ids=input_ids,
                    attention_mask=attention_mask
                )
                loss = self.loss_fn(outputs, targets)
            
            scaler.scale(loss).backward()
            scaler.step(self.optimizer)
            scaler.update()
            
            # Get predictions for calculating training set scores
            probs = torch.sigmoid(outputs) 
            preds = (probs > 0.5).long().flatten()
            original_targets = targets.long().flatten() 
            
            losses.append(loss.item())
            predictions += list(np.array(preds.cpu()))
            labels += list(np.array(original_targets.cpu()))

            torch.nn.utils.clip_grad_norm_(self.model.parameters(), max_norm=1.0)
            self.scheduler.step()
            
            progress_bar.set_description(
                f'loss: {loss.item():.3f}, acc : {(torch.sum(preds == original_targets)/len(original_targets)):.3f}')
        
        train_loss = np.mean(losses)
        score_dict = get_MCM_score(labels, predictions)
        return train_loss, score_dict

    def eval(self):
        self.model = self.model.eval() 
        losses = []
        all_probs = []
        all_labels = []
        all_filenames = []
        
        # leave=False to prevent screen flicker
        progress_bar = tqdm(enumerate(self.valid_loader), total=len(self.valid_loader), desc="Inference", leave=False)

        with torch.no_grad():
            for _, data in progress_bar:
                input_ids = data["input_ids"].to(self.device)
                attention_mask = data["attention_mask"].to(self.device)
                targets = data["targets"].to(self.device).float().unsqueeze(1)
                filename = data["filename"]
                
                outputs, _ = self.model(input_ids=input_ids, attention_mask=attention_mask)
                loss = self.loss_fn(outputs, targets)
                losses.append(loss.item())

                probs = torch.sigmoid(outputs).flatten().cpu().numpy()
                original_targets = targets.flatten().cpu().numpy()
                
                all_probs.extend(probs)
                all_labels.extend(original_targets)
                all_filenames.extend(filename)

        all_probs = np.array(all_probs)
        all_labels = np.array(all_labels)
        val_loss = np.mean(losses)

        # 1. Calculate metrics at threshold 
        target_threshold = 0.45
        temp_preds = (all_probs >= target_threshold).astype(int)
        temp_score = get_MCM_score(all_labels, temp_preds)
        epoch_results_dict = {target_threshold: temp_score}
        print(f"Threshold: {target_threshold:.2f} | Score: {temp_score}")
        print(f"{'='*40}\n")
        
        # 2. Generate default prediction results (for return)
        # Logic: If current is the best model, this dict will be used outside; otherwise, it will be discarded

        default_preds = (all_probs >= 0.5).astype(int)
        file_dict = {}
        for file, pred, new_label in zip(all_filenames, default_preds, all_labels):
            file_dict[file] = {'pred': int(pred), 'label': int(new_label)}
        
        return val_loss, epoch_results_dict, file_dict

    def train(self):
        target_threshold = 0.45  
        print(f"Start Training (Min Loss Snapshot Mode) for {self.epochs} epochs...")
        
        for epoch in range(self.epochs):
            print(f'\nEpoch {epoch + 1}/{self.epochs}')
            
            # 1. Training and evaluation
            train_loss, train_score = self.fit()
            val_loss, all_threshold_scores, _ = self.eval()
            
            # =========================================================
            # [Core Logic]: When Loss hits new low -> Save model & lock snapshot
            # =========================================================
            save_msg = ""
            if val_loss < self.min_val_loss:
                self.min_val_loss = val_loss
                
                # A. Save model (overwrite old one)
                save_name = self.model_save_base + "_min_loss.pt"
                torch.save(self.model.state_dict(), save_name)
                
                # B. Lock snapshot (this is the real data of the model on disk)
                self.min_loss_model_snapshot = all_threshold_scores
                
                save_msg = f"  >>> [SAVED] New Min Loss & Snapshot Updated!"
            
            print(f"Train Loss: {train_loss:.4f} | Val Loss: {val_loss:.4f}{save_msg}")

            # =========================================================
            # 3. Print snapshot table (shows performance of the model on disk)
            # =========================================================
            print(f"\n{'Threshold':<10} | {'F1(%)':<10} | {'Pre(%)':<10} | {'Rec(%)':<10}")
            print("-" * 60)
            
            # If no model saved yet, use current data to avoid empty table
            display_data = self.min_loss_model_snapshot if self.min_loss_model_snapshot else all_threshold_scores
            

            th = target_threshold
            score_d = display_data.get(th, {'f_score': 0, 'precision': 0, 'recall': 0})
            
            # Your get_MCM_score returns string, convert to float for readability
            c_f1 = float(score_d.get("f_score", 0))
            c_pre = float(score_d.get("precision", 0))
            c_rec = float(score_d.get("recall", 0))
            
            print(f"{th:.2f}       | {c_f1:.4f}     | {c_pre:.4f}     | {c_rec:.4f}")
            print("="*60)

# Bert_Classifier inheritance, logic reused automatically
class Bert_Classifier(CodeBert_Classifier):
    def __init__(self, **kw):
        self.config = BertConfig.from_pretrained("bert-base-uncased", num_labels=kw.get("nclass", 1))
        self.model = BertForSequenceClassification.from_pretrained("bert-base-uncased", config=self.config)
        self.tokenizer = BertTokenizer.from_pretrained('bert-base-uncased')
        
        device_id = 1 if torch.cuda.device_count() > 1 else 0
        self.device = torch.device(f"cuda:{device_id}" if torch.cuda.is_available() else "cpu")

        self.max_len = kw.get("max_len", 512)
        self.epochs = kw.get("epochs", 10)
        self.batch_size = kw.get("batch_size", 32)
        self.learning_rate = kw.get("learning_rate", 2e-5)
        self.model.to(self.device)
        
        self.item_num = kw.get("item_num", 0)
        self.hidden_size = kw.get("hidden_size", 768)
        self.loss_fn = torch.nn.BCEWithLogitsLoss().to(self.device)
        
        # Also initialize these two to prevent errors when Bert is called
        self.min_val_loss = float('inf')
        self.min_loss_model_snapshot = {}

class Bert_Classifier(CodeBert_Classifier):
    def __init__(self, **kw):
        self.config = BertConfig.from_pretrained("bert-base-uncased", num_labels=kw["nclass"])
        self.model = BertForSequenceClassification.from_pretrained("bert-base-uncased", config=self.config)
        self.tokenizer = BertTokenizer.from_pretrained('bert-base-uncased')
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

        self.max_len = kw["max_len"]
        self.epochs = kw["epochs"]
        self.batch_size = kw["batch_size"]
        self.learning_rate = kw["learning_rate"]
        self.model.to(self.device)
        
        self.item_num = kw["item_num"]
        self.hidden_size = kw["hidden_size"]
        self.loss_fn = torch.nn.BCEWithLogitsLoss().to(self.device)
        
        # Initialize these two to prevent errors
        self.min_val_loss = float('inf')
        self.min_loss_model_snapshot = {}