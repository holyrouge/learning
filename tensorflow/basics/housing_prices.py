# Neural Network to Predict Housing Prices

# So, imagine if house pricing was as easy as a house costs 
# 50k + 50k per bedroom, so that a 1 bedroom house costs 100k, 
# a 2 bedroom house costs 150k etc.
# How would you create a neural network that learns this relationship 
# so that it would predict a 7 bedroom house as costing close to 400k etc.
# Hint: Your network might work better if you scale the house price down. 
# You don't have to give the answer 400...it might be better to create 
# something that predicts the number 4, and then your answer is in the 
# 'hundreds of thousands' etc.

import tensorflow as tf
import numpy as np
from tensorflow import keras

# the model
model = keras.Sequential([keras.layers.Dense(units=1, input_shape=[1])])

# compilation (optimizer + loss function)
# sgd = stochastic gradient descent
model.compile(optimizer='sgd', loss='mean_squared_error')

# data
xs = np.array([1.0, 2.0, 3.0, 4.0, 5.0, 6.0], dtype=float)
# housing price scaled by 100k
ys = np.array([1.0, 1.5, 2.0, 2.5, 3.0, 3.5], dtype=float)

# training
model.fit(xs, ys, epochs=1000)

# result
print(model.predict([7.0]))