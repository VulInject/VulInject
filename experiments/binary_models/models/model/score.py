import pickle
import numpy as np
import sys
from sklearn.metrics import roc_auc_score
from sklearn.metrics import confusion_matrix
from sklearn.metrics import multilabel_confusion_matrix
from sklearn.metrics import precision_recall_fscore_support
from sklearn.metrics import classification_report
from sklearn.metrics import accuracy_score

try:
    import np._core
except ImportError:
    sys.modules['numpy._core'] = np.core
    
from numpy import core
sys.modules['numpy._core.multiarray'] = core.multiarray

def sava_data(filename, data):
    print("saving data to:", filename)
    f = open(filename, 'wb')
    pickle.dump(data, f)
    f.close()

def load_data(filename):
    print("loading data from:", filename)
    f = open(filename, 'rb')
    data = pickle.load(f)
    f.close()
    return data

def get_accuracy(labels, prediction):    
    cm = confusion_matrix(labels, prediction)
    def linear_assignment(cost_matrix):    
        import lap
        _, x, y = lap.lapjv(cost_matrix, extend_cost=True)
        return np.array([[y[i], i] for i in x if i >= 0])
    def _make_cost_m(cm):
        s = np.max(cm)
        return (- cm + s)
    indexes = linear_assignment(_make_cost_m(cm))
    js = [e[1] for e in sorted(indexes, key=lambda x: x[0])]
    cm2 = cm[:, js]    
    accuracy = np.trace(cm2) / np.sum(cm2)
    return accuracy 

def calculate_accuracy(fx, y):
    pred_idxs = fx.max(1, keepdim=True)[1]
    correct = pred_idxs.eq(y.view_as(pred_idxs)).sum()
    acc = correct.float()/pred_idxs.shape[0]
    return acc

def calculate_f1(fx, y):
    pred_idxs = fx.max(1, keepdim=True)[1]
    pred_names = [idx2target[i.item()] for i in pred_idxs]
    original_names = [idx2target[i.item()] for i in y]
    true_positive, false_positive, false_negative = 0, 0, 0
    for p, o in zip(pred_names, original_names):
        predicted_subtokens = p.split('|')
        original_subtokens = o.split('|')
        for subtok in predicted_subtokens:
            if subtok in original_subtokens:
                true_positive += 1
            else:
                false_positive += 1
        for subtok in original_subtokens:
            if not subtok in predicted_subtokens:
                false_negative += 1
    try:
        precision = true_positive / (true_positive + false_positive)
        recall = true_positive / (true_positive + false_negative)
        f1 = 2 * precision * recall / (precision + recall)
    except ZeroDivisionError:
        precision, recall, f1 = 0, 0, 0
    return precision, recall, f1

def get_MCM_score(labels, predictions):
    print(classification_report(labels, predictions))
    report_dict = classification_report(labels, predictions,output_dict = True)

    precision, recall, f_score, true_sum = precision_recall_fscore_support(labels, predictions,average='binary')   
    print(precision, recall, f_score)
    acc = accuracy_score(labels, predictions)
    roc = roc_auc_score(labels, predictions)
    return {
        "precision": format(precision * 100, '.6f'),
        "recall": format(recall * 100, '.6f'),
        "f_score" : format(f_score * 100, '.6f'),
        "ROC": format(roc * 100, '.6f'),
        "ACC": format(acc * 100, '.6f'),
    }

def get_MCM_score_code2vec(labels, predictions):
    print(classification_report(labels, predictions))
    report_dict = classification_report(labels, predictions,output_dict = True)
    acc = accuracy_score(labels, predictions)
    roc = roc_auc_score(labels, predictions)
    return {
        "precision_0": format(report_dict["2"]["precision"] * 100, '.3f'),
        "precision": format(report_dict["3"]["precision"] * 100, '.3f'),
        "recall_0": format(report_dict["2"]["recall"] * 100, '.3f'),
        "recall": format(report_dict["3"]["recall"] * 100, '.3f'),
        "f_score_0": format(report_dict["2"]["f1-score"] * 100, '.3f'),
        "f_score" : format(report_dict["3"]["f1-score"] * 100, '.3f'),
        "ROC": format(roc * 100, '.3f'),
        "ACC": format(acc * 100, '.3f'),
        "report_dict": report_dict
    }