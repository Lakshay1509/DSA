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
print(data.head())



import tensorflow as tf
from tensorflow import keras
from keras.models import Model
from keras.layers import Dense
model = Sequential()
model.add(Dense(64, activation='relu', input_shape=(100,)))  # Adjust input shape based on your embeddings
model.add(Dense(32, activation='relu'))
model.add(Dense(12, activation='softmax'))  # Output layer with 12 classes (labels)

# Compile the model
model.compile(loss='categorical_crossentropy', optimizer='adam', metrics=['accuracy'])

# Train the model
model.fit(np.array(X_train), np.array(y_train), epochs=10, batch_size=32, validation_split=0.1)

# Evaluate the model on the test set
test_loss, test_accuracy = model.evaluate(np.array(X_test), np.array(y_test))
print(f'Test Accuracy: {test_accuracy * 100:.2f}%')