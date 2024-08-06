import pandas as pd
from nltk.tokenize import word_tokenize
import re
import nltk

nltk.download('punkt')  # Download NLTK tokenizer data (only needed once)



data = pd.read_csv('C:\\Users\\Ankita\\Downloads\\Python_test.csv')
print(data)
print(data.head())