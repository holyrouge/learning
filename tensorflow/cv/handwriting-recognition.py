# Neural Network for Handwriting Recognition
# Using the MNIST Dataset

import tensorflow as tf 
from tensorflow import keras

mnist = keras.datasets.mnist

# callback
class myCallback(keras.callbacks.Callback):
    def on_epoch_end(self, epoch, logs={}):
        # checks the loss rate and says to stop after the accuracy
        # rate is achieved
        if (logs.get('acc') >= 0.99):
            print("\nReached 99% accuracy so cancelling training!")
            self.model.stop_training = True

# create an instance of the callback class
callbacks = myCallback()

# load the data and normalize it to be in betwen 0 and 1
(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train = x_train / 255.0
x_test = x_test / 255.0

# create the model
model = keras.models.Sequential([
    keras.layers.Flatten(input_shape=(28, 28)),
    keras.layers.Dense(512, activation=tf.nn.relu),
    keras.layers.Dense(10, activation=tf.nn.softmax)
])

# compile the model
model.compile(optimizer='adam', 
                loss='sparse_categorical_crossentropy',
                metrics=['accuracy'])

# fit the model with the training data
model.fit(x_train, y_train, epochs=10, callbacks=[callbacks])

# evaluate the model using the test data
model.evaluate(x_test, y_test)

