import nltk
nltk.download('punkt')
from nltk.tokenize import word_tokenize

# Sample text
text = "Multiple_Sclerosis is a neurological disorder."

# Tokenize the text
tokens = word_tokenize(text)

# Print the tokens
print(tokens)

import re
from nltk.tokenize import word_tokenize

def preprocess_text(text):
    # Lowercase the text
    text = text.lower()
    
    # Remove special characters and punctuation
    text = re.sub(r'[^a-zA-Z0-9\s]', '', text)
    
    # Tokenize the text
    tokens = word_tokenize(text)
    
    return tokens

# Sample text
text = "Multiple_Sclerosis is a neurological disorder."

# Preprocess and tokenize the text
tokens = preprocess_text(text)

# Print the tokens
print(tokens)


import pandas as pd
from nltk.tokenize import word_tokenize
import re
import nltk

nltk.download('punkt')  # Download NLTK tokenizer data (only needed once)



data = pd.read_csv('C:\\Users\\Ankita\\Downloads\\Python_test.csv')
print(data)