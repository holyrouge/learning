# The 'Hello World' of Neural Networks

import tensorflow as tf
import numpy as np
from tensorflow import keras

# single neuron neural network with density of 1 layer and an input shape of 1 value
# a dense is a layer of connected neurons
model = keras.Sequential([keras.layers.Dense(units=1, input_shape=[1])])

# the neural network will guess the relationship between X and Y
# the loss function measures how good or how bad the guess is by 
# comparing it with the given data values
# the optimizer then determines how good or how bad the guess was using
# the data from the loss function
# the logic is that each guess will be better than the previous guess
# this process is called convergence
# sgd = stochastic gradient descent
model.compile(optimizer='sgd', loss='mean_squared_error')

# data
xs = np.array([-1.0, 0.0, 1.0, 2.0, 3.0, 4.0], dtype=float)
ys = np.array([-3.0, -1.0, 1.0, 3.0, 5.0, 7.0], dtype=float)

# training
# epochs=500 means that it will go through the training loop 500 times
model.fit(xs, ys, epochs=500)

# predict a value of y from a given x
# the predict method gives the result from a given input based on the rules
# determined by the model
# the answer will not be exactly 19, but close to it because the neural
# network is using probability to determine a realistic value from the
# limited data set
print(model.predict([10.0]))
