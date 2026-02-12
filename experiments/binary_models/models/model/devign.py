import torch, os
from tqdm import tqdm
from dgl.nn import GatedGraphConv
from torch import nn
import numpy as np
from torch.cuda.amp import autocast
import torch.nn.functional as f
from torch_geometric.nn import GatedGraphConv as GatedGraphConv_2
from torch_geometric.nn import global_mean_pool
from model.Lstm import LSTM_Classifier
from model.score import get_MCM_score, sava_data, load_data
from transformers import AdamW, get_linear_schedule_with_warmup
from collections import defaultdict  # Must import this

class DevignModel(nn.Module):
    def __init__(self, input_dim, output_dim, max_edge_types=4, num_steps=6):
        super(DevignModel, self).__init__()
        self.inp_dim = input_dim #100
        self.out_dim = output_dim #200
        self.max_edge_types = max_edge_types
        self.num_timesteps = num_steps
        self.ggnn = GatedGraphConv(in_feats=input_dim, out_feats=output_dim,
                                   n_steps=num_steps, n_etypes=max_edge_types)
        self.conv_l1 = torch.nn.Conv1d(output_dim, output_dim, 3)
        self.maxpool1 = torch.nn.MaxPool1d(3, stride=2)
        self.conv_l2 = torch.nn.Conv1d(output_dim, output_dim, 1)
        self.maxpool2 = torch.nn.MaxPool1d(2, stride=2)

        self.concat_dim = input_dim + output_dim
        self.conv_l1_for_concat = torch.nn.Conv1d(self.concat_dim, self.concat_dim, 3)
        self.maxpool1_for_concat = torch.nn.MaxPool1d(3, stride=2)
        self.conv_l2_for_concat = torch.nn.Conv1d(self.concat_dim, self.concat_dim, 1)
        self.maxpool2_for_concat = torch.nn.MaxPool1d(2, stride=2)

        self.batchnorm_1d = torch.nn.BatchNorm1d(output_dim)
        self.batchnorm_1d_for_concat = torch.nn.BatchNorm1d(self.concat_dim)

        self.mlp_z = nn.Linear(in_features=self.concat_dim, out_features=2)
        self.mlp_y = nn.Linear(in_features=output_dim, out_features=2)
        self.sigmoid = nn.Sigmoid()
        self.softmax=nn.Softmax()

    def forward(self, batch, cuda=False, get_feature=False):
        
        graph, features, edge_types = batch.get_network_inputs(cuda=cuda, device=torch.device("cuda:0"))
        
        graph = graph.to(torch.device("cuda:0"))
        features = features.to(torch.device("cuda:0"))
        edge_types = edge_types.to(torch.device("cuda:0"))

        outputs = self.ggnn(graph, features, edge_types)
        
        x_i, _ = batch.de_batchify_graphs(features)
        h_i, _ = batch.de_batchify_graphs(outputs)
        
        c_i = torch.cat((h_i, x_i), dim=-1)
        
        # === Helper Function 1: Safe Pooling (Handle length < kernel) ===
        def safe_pool(pool_layer, tensor):
            k = pool_layer.kernel_size
            if isinstance(k, tuple): k = k[0]
            if tensor.size(2) < k:
                tensor = f.pad(tensor, (0, k - tensor.size(2)))
            return pool_layer(tensor)

        # === Helper Function 2: Safe BN (Prevent error when batch=1) ===
        def safe_bn(bn_layer, tensor):
            if self.training and tensor.size(0) == 1:
                bn_layer.eval()  
                out = bn_layer(tensor)
                bn_layer.train() 
                return out
            return bn_layer(tensor)

        # === 1. Calculate Y_1 ===
        y1_input = self.conv_l1(h_i.transpose(1, 2))
        y1_input = safe_bn(self.batchnorm_1d, y1_input) 
        y1_input = f.relu(y1_input)
        Y_1 = safe_pool(self.maxpool1, y1_input)

        # === 2. Calculate Y_2 ===
        y2_input = self.conv_l2(Y_1)
        y2_input = safe_bn(self.batchnorm_1d, y2_input) 
        y2_input = f.relu(y2_input)
        Y_2 = safe_pool(self.maxpool2, y2_input).transpose(1, 2)

        # === 3. Calculate Z_1 ===
        z1_input = self.conv_l1_for_concat(c_i.transpose(1, 2))
        z1_input = safe_bn(self.batchnorm_1d_for_concat, z1_input) 
        z1_input = f.relu(z1_input)
        Z_1 = safe_pool(self.maxpool1_for_concat, z1_input)

        # === 4. Calculate Z_2 ===
        z2_input = self.conv_l2_for_concat(Z_1)
        z2_input = safe_bn(self.batchnorm_1d_for_concat, z2_input) 
        z2_input = f.relu(z2_input)
        Z_2 = safe_pool(self.maxpool2_for_concat, z2_input).transpose(1, 2)

        before_avg = torch.mul(self.mlp_y(Y_2), self.mlp_z(Z_2))
        avg = before_avg.mean(dim=1)
        result = self.sigmoid(avg)

        if get_feature:
            return h_i
        else:
            return result


class GGNNSum(nn.Module):
    def __init__(self, input_dim, output_dim, max_edge_types, num_steps=8):
        super(GGNNSum, self).__init__()
        self.inp_dim = input_dim
        self.out_dim = output_dim
        self.max_edge_types = max_edge_types
        self.num_timesteps = num_steps
        self.ggnn = GatedGraphConv(in_feats=input_dim, out_feats=output_dim, n_steps=num_steps,
                                   n_etypes=max_edge_types)
        self.classifier = nn.Linear(in_features=output_dim, out_features=1)
        self.sigmoid = nn.Sigmoid()

    def forward(self, batch, cuda=False):
        graph, features, edge_types = batch.get_network_inputs(cuda=cuda,device=torch.device("cuda:0"))
        graph = graph.to(torch.device("cuda:0"))
        features = features.to(torch.device("cuda:0"))
        edge_types = edge_types.to(torch.device("cuda:0"))
        outputs = self.ggnn(graph, features, edge_types)
        h_i, _ = batch.de_batchify_graphs(outputs)
        ggnn_sum = self.classifier(h_i.sum(dim=1))
        result = self.sigmoid(ggnn_sum).squeeze(dim=-1)
        return result


class Devign_simplify(nn.Module):
    def __init__(self,output_dim, max_edge_types=4, num_steps=6):
        super(DevignModel, self).__init__()
        self.out_dim = output_dim #200
        self.max_edge_types = max_edge_types
        self.num_timesteps = num_steps
        self.relu = nn.ReLU()
        self.ggnn = GatedGraphConv_2(out_channels=output_dim,
                                   num_layers=num_steps)
        self.classifier = nn.Linear(in_features=output_dim, out_features=2)
        self.sigmoid = nn.Sigmoid()

    def forward(self, x, edge_index):
        x = x.to(torch.device("cuda:0"))
        edge_index = edge_index.to(torch.device("cuda:0"))
        outputs = self.ggnn(x, edge_index)
        outputs = self.relu(outputs)
        pooled = global_mean_pool(outputs, torch.zeros(outputs.shape[0], dtype=int, device=outputs.device))
        avg = self.classifier(pooled)
        result = self.sigmoid(avg)
        return result


# Ensure these imports are at the top of the file
import torch
import os
import numpy as np
from tqdm import tqdm
from transformers import AdamW, get_linear_schedule_with_warmup
from model.score import get_MCM_score

class Devign_Classifier(LSTM_Classifier):
    def __init__(self, **kw):
        # 1. Auto rename parameters
        if 'lr' in kw and 'learning_rate' not in kw:
            kw['learning_rate'] = kw['lr']
        if 'epoch' in kw and 'epochs' not in kw:
            kw['epochs'] = kw['epoch']

        # 2. Fill in default parameters
        defaults = {
            'hidden_size': 200,
            'max_len': 500,
            'word2vec_model': None,
            'item_num': 0,
            'batch_size': 64,
            'learning_rate': 0.001,
            'epochs': 100
        }
        for key, value in defaults.items():
            if key not in kw:
                kw[key] = value

        # 3. Call parent class constructor
        super().__init__(**kw)

        # 4. Devign initialization
        self.model = DevignModel(input_dim=kw["dataset"].feature_size, output_dim=kw["graph_embed_size"],
                                num_steps=kw["num_steps"], max_edge_types=4)
        
        self.dataset = kw["dataset"]
        self.device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
        self.model.to(self.device)
        self.item_num = kw["item_num"]
        self.epochs = kw["epochs"] 
        self.learning_rate = kw["learning_rate"]
        self.batch_size = kw["batch_size"]
        
        # === Path Configuration ===
        self.result_save_path = kw["outputpath"] + "/"  if kw["outputpath"][-1] != "/" else kw["outputpath"]
        model_save_path_dir = self.result_save_path + "model/"        
        if not os.path.exists(self.result_save_path): os.makedirs(self.result_save_path)
        if not os.path.exists(model_save_path_dir): os.makedirs(model_save_path_dir)
        
        self.result_save_path = self.result_save_path + str(self.item_num) + ".result"
        
        self.model_save_base = model_save_path_dir + str(self.item_num) 
        self.model_save_path = model_save_path_dir + str(self.item_num) + "_epoch_" 
        
        self.loss_fn = torch.nn.CrossEntropyLoss().to(self.device)
        self.optimizer = AdamW(self.model.parameters(), lr=self.learning_rate, correct_bias=False)
        self.scheduler = get_linear_schedule_with_warmup(
            self.optimizer,
            num_warmup_steps=0,
            num_training_steps=self.dataset.initialize_train_batch() * self.epochs
        )

        # [Core Change]: No longer record "historical best", but record "snapshot of Min Loss model"
        # Structure: {0.6: {'f1':..., 'pre':...}} (only 0.6 threshold)
        self.min_loss_model_snapshot = {} 
        
        # Record global minimum Loss
        self.min_val_loss = float('inf')
        # Fixed threshold for evaluation
        self.eval_threshold = 0.6

    def fit(self):
        self.model = self.model.train()
        losses = []
        labels = []
        predictions = []
        scaler = torch.cuda.amp.GradScaler()
        all_steps =  self.dataset.initialize_train_batch()
        progress_bar = tqdm(range(all_steps))        
        for _ in progress_bar:
            self.optimizer.zero_grad()
            graph, targets = self.dataset.get_next_train_batch()
            targets = targets.long()
            targets = torch.LongTensor(targets).cuda()
            with autocast():
                outputs = self.model(graph, cuda=True)
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
        print("\n" + "="*20 + " Start Evaluating " + "="*20)
        self.model = self.model.eval()
        
        losses = []
        all_probs = []
        all_labels = []
        filename_dict = []
        
        # 1. Inference
        all_steps = self.dataset.initialize_test_batch()
        progress_bar = tqdm(range(all_steps), desc="Inference", leave=False)
        
        with torch.no_grad():
            for _ in progress_bar:
                graph, targets = self.dataset.get_next_test_batch()
                filename = [i.name.split(".")[0] for i in graph.subpdg]
                filename_dict.extend(list(filename))
                
                targets = targets.long().to(self.device)
                outputs = self.model(graph, cuda=True)
                loss = self.loss_fn(outputs, targets)
                losses.append(loss.item())
                
                if outputs.dim() == 2 and outputs.size(1) == 2:
                    probs = torch.nn.functional.softmax(outputs, dim=1)[:, 1]
                else:
                    probs = outputs
                
                all_probs.extend(probs.cpu().tolist())
                all_labels.extend(targets.cpu().tolist())

        val_loss = np.mean(losses)
        np_probs = np.array(all_probs)
        np_labels = np.array(all_labels)


        current_epoch_metrics = {}
        th = self.eval_threshold
        pred_labels = (np_probs >= th).astype(int)
        scores = get_MCM_score(np_labels, pred_labels)
        
        cur_f1 = float(scores.get('f_score', 0))
        cur_pre = float(scores.get('precision', 0))
        cur_rec = float(scores.get('recall', 0))
        
        # Store metrics for fixed threshold
        current_epoch_metrics[th] = {
            'f1': cur_f1, 'pre': cur_pre, 'rec': cur_rec
        }
        

        best_epoch_scores = scores

        # ========================================================
        # [Core Logic]: Decide whether to update "snapshot" and save model based on Loss
        # ========================================================
        loss_save_msg = ""
        if val_loss < self.min_val_loss:
            self.min_val_loss = val_loss
            
            # 1. Save model file (unique file)
            save_name = f"{self.model_save_base}_min_loss.bin"
            torch.save(self.model.state_dict(), save_name)
            
            # 2. [Key]: Take snapshot 
            self.min_loss_model_snapshot = current_epoch_metrics
            
            loss_save_msg = f"  >>> MODEL SAVED & METRICS LOCKED (New Min Loss: {val_loss:.4f})"
        
        print(f"Val Loss: {val_loss:.4f}{loss_save_msg}")

        # ========================================================
        # 3. Print table 
        # ========================================================
        print("\n" + "="*20 + " SAVED MODEL PERFORMANCE  " + "="*20)
        print(f"{'Threshold':<10} | {'F1(%)':<10} | {'Pre(%)':<10} | {'Rec(%)':<10}")
        print("-" * 60)
        
        # If no model has been saved yet, use current epoch data
        if not self.min_loss_model_snapshot:
            display_data = current_epoch_metrics
        else:
            display_data = self.min_loss_model_snapshot

  
        rec = display_data.get(th, {'f1': 0, 'pre': 0, 'rec': 0})
        print(f"{th:.2f}       | {rec['f1']:.4f}     | {rec['pre']:.4f}     | {rec['rec']:.4f}")
        print("="*67 + "\n")


        final_preds = (np_probs >= self.eval_threshold).astype(int)
        
        file_dict = {}
        for file, pred, label, prob in zip(filename_dict, final_preds, all_labels, all_probs):
            file_dict[file] = {'pred': int(pred), 'label': int(label), 'prob': float(prob)}

        return val_loss, best_epoch_scores, file_dict