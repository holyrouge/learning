# A CV example using the Fashion-MNIST Dataset
# Goal: Recognize different items of clothing, trained
# from a dataset containing 10 different types
# Using a 2D Convultional Neural Network

import tensorflow as tf
from tensorflow import keras

# this callback allows you to stop training the
# model once a certain accuracy is reached
class myCallback(keras.callbacks.Callback):
    def on_epoch_end(self, epoch, logs={}):
        # checks the loss rate and says to stop after the given loss
        # rate is achieved
        if (logs.get('loss') < 0.4):
            print("\nReached 60% accuracy so cancelling training!")
            self.model.stop_training = True

callbacks = myCallback()

# get data set from built-in API in keras datasets
fashion_mnist = keras.datasets.fashion_mnist

# get training images, training labels, test images, and test labels
(training_images, training_labels), (test_images, test_labels) = fashion_mnist.load_data()

# reshape training images into a single 4D list that is 60000x28x28x1
training_images=training_images.reshape(60000, 28, 28, 1)
# normalize data values because neural networks work better with small numbers
# change values from 0 - 255 to 0 - 1
training_images = training_images / 255.0
test_images = test_images / 255.0

# the model
model = keras.models.Sequential([
    # create the cnn with 64 layers of 3x3 matrices
    # relu removes negative values
    # input shape is 28x28 images with 1 byte used for data because they are b&w
    keras.layers.Conv2D(64, (3,3), activation='relu', input_shape=(28, 28, 1)),
    # max pooling takes the maximum value from a 2x2 group of pixel
    keras.layers.MaxPooling2D(2, 2),
    # second cnn and max pooling
    keras.layers.Conv2D(64, (3,3), activation='relu'),
    keras.layers.MaxPooling2D(2, 2),
    # image has now been halved twice
    # the goal is to take only the fundamental parts of the image
    # that define the output    
    keras.layers.Flatten(),
    keras.layers.Dense(1024, activation=tf.nn.relu),
    keras.layers.Dense(10, activation=tf.nn.softmax)
])

# this method shows each of the layers and the journey of 
# of the image through each of the convolutions
model.summary()

# compile the model; set the optimizer, the loss function, and metrics
model.compile(optimizer = 'adam',
                loss = 'sparse_categorical_crossentropy',
                metrics = ['accuracy'])

# fit the training data
model.fit(training_images, training_labels, epochs=5, callbacks=[callbacks])

# test the model
model.evaluate(test_images, test_labels)
