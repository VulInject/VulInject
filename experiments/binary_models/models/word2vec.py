
import pickle
import pandas as pd
from gensim.models import Word2Vec
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

def train_word2vec_model():
    """Train Word2Vec model on multiple datasets."""
    
    # Define dataset paths
    dataset_paths = [
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/primevul_train/primevul_train.pkl',
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/vgx_1_5000/vgx_1_5000.pkl',
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/vgx_0_5000/vgx_0_5000.pkl',
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/vulgen_5000/vulgen_5000.pkl',
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/sard_5000/sard_5000.pkl',
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/primevul_test/test_new.pkl',
        '/home/VulInject_copy/experiments/binary_models/models/data/pkl/sub_original_dataset/vulinject_5000/vulinject_5000.pkl'
    ]
    
    logger.info(f"Loading {len(dataset_paths)} datasets for Word2Vec training")
    
    # Load all datasets
    datasets = []
    for path in dataset_paths:
        try:
            dataset = load_data(path)
            datasets.append(dataset)
            logger.info(f"Loaded dataset: {path}, size: {len(dataset)}")
        except Exception as e:
            logger.warning(f"Failed to load {path}: {str(e)}")
            continue
    
    if not datasets:
        logger.error("No datasets loaded successfully")
        return
    
    # Prepare sentences for training
    logger.info("Preparing sentences for Word2Vec training")
    sentences = []
    
    for dataset in datasets:
        if 'subcode' in dataset.columns:
            # Use list comprehension for better performance
            dataset_sentences = [(" ".join(x)).split() if isinstance(x, list) else str(x).split() 
                               for x in dataset.subcode]
            sentences.extend(dataset_sentences)
        else:
            logger.warning("Dataset missing 'subcode' column, skipping")
    
    logger.info(f"Total sentences prepared: {len(sentences)}")
    
    # Check if we have enough sentences
    if len(sentences) < 10:
        logger.error(f"Insufficient sentences for training: {len(sentences)}")
        return
    
    # Train Word2Vec model
    logger.info("Training Word2Vec model")
    
    vector_length = 128  # Vector dimension
    model = Word2Vec(
        sentences, 
        min_count=1, 
        vector_size=vector_length, 
        sg=1,           # Use skip-gram (1) or CBOW (0)
        window=5,       # Context window size
        workers=4,      # Number of CPU cores
        epochs=10       # Number of training iterations
    )
    
    # Save the model
    model_path = f"./data/word2vec_model/word2vec_{vector_length}d.model"
    
    # Ensure directory exists
    import os
    os.makedirs(os.path.dirname(model_path), exist_ok=True)
    
    # Save model in multiple formats
    
    # 1. Save as Gensim model (recommended for further training)
    model.save(model_path)
    logger.info(f"Saved Word2Vec model to: {model_path}")
    
    # 2. Save word vectors separately (for easy loading)
    vectors_path = f"./data/word2vec_model/word_vectors_{vector_length}d.pkl"
    with open(vectors_path, 'wb') as f:
        pickle.dump(model.wv, f)
    logger.info(f"Saved word vectors to: {vectors_path}")
    
    # 3. Save in text format (for compatibility with other tools)
    text_path = f"./data/word2vec_model/word2vec_{vector_length}d.txt"
    model.wv.save_word2vec_format(text_path, binary=False)
    logger.info(f"Saved word vectors in text format to: {text_path}")
    
    # Print model information
    logger.info(f"Vocabulary size: {len(model.wv)}")
    logger.info(f"Vector dimension: {vector_length}")
    
    # Test with some example words
    test_words = ['int', 'char', 'malloc', 'free', 'if', 'for']
    logger.info("Testing model with example words:")
    for word in test_words:
        if word in model.wv:
            logger.info(f"  '{word}' found in vocabulary")
        else:
            logger.info(f"  '{word}' NOT found in vocabulary")
    
    return model

def load_trained_model(vector_length=128):
    """Load a trained Word2Vec model."""
    model_path = f"./data/word2vec_model/word2vec_{vector_length}d.model"
    
    try:
        model = Word2Vec.load(model_path)
        logger.info(f"Loaded Word2Vec model from: {model_path}")
        logger.info(f"Vocabulary size: {len(model.wv)}")
        return model
    except FileNotFoundError:
        logger.error(f"Model not found at: {model_path}")
        return None
    except Exception as e:
        logger.error(f"Error loading model: {str(e)}")
        return None

if __name__ == "__main__":
    # Train the model
    model = train_word2vec_model()
    
    if model:
        # Example: Get vector for a word
        test_word = "malloc"
        if test_word in model.wv:
            vector = model.wv[test_word]
            logger.info(f"Vector for '{test_word}' (first 5 dimensions): {vector[:5]}")
        
        # Example: Find similar words
        similar_words = model.wv.most_similar("buffer", topn=5)
        logger.info(f"Words similar to 'buffer': {similar_words}")