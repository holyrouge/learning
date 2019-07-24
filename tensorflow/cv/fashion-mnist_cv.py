# A CV example using the Fashion-MNIST Dataset
# Goal: Recognize different items of clothing, trained
# from a dataset containing 10 different types

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
# you can use matplotlib to see the dataset
# sample code:
# import matplotlib.pyplot as plt
# plt.imshow(training_images[0])
# print(training_labels[0])
# print(training_images[0])

# normalize data values because neural networks work better with small numbers
# change values from 0 - 255 to 0 - 1
training_images = training_images / 255.0
test_images = test_images / 255.0

# the model
model = keras.models.Sequential([
    # turns images into a linear a grid of values
    # the first layer of the network needs to be the same shape
    # as the data. It is easier to have a layer of 784 x 1, than
    # 28 x 28, as required by the shape of the given data.
    keras.layers.Flatten(),
    # the middle layer
    # relu effectively means "if x > 0, return x, else return 0",
    # so it only passes values 0 or greater to the next layer in the network
    # increasing the number of neurons in this middle layer will increase
    # the time it takes to train the model, but it will increase the accuracy
    # this isn't always the case, and it is easy to hit the law of diminishing
    # returns very quickly
    # additional layers could be necessary for complex data such as color images
    keras.layers.Dense(1024, activation=tf.nn.relu),
    # layer of 10 neurons 
    # there are 10 neurons, one for each class in the data.
    # if you changed this value, it could cause an error once an 
    # unexpected value is found (such as 7 when trained with 5 neurons)
    # the number of neurons in the last layer should be the same as the 
    # number of classes you are classifying for.
    # softmax takes a set of values, and effectively picks the biggest one,
    # so for example, if the output of the last layer looks like 
    # [0.1, 0.1, 0.05, 0.1, 9.5, 0.1, 0.05, 0.05, 0.05], it saves you from 
    # fishing through it looking for the biggest value, and turns it 
    # into [0,0,0,0,1,0,0,0,0]
    keras.layers.Dense(10, activation=tf.nn.softmax)
])

# compile the model; set the optimizer, the loss function, and metrics
model.compile(optimizer = 'adam',
                loss = 'sparse_categorical_crossentropy',
                metrics = ['accuracy'])

# fit the training data
# increasing the number of epochs (training cycles) will
# generally increase the accuracy, though only upto a certain value
model.fit(training_images, training_labels, epochs=5, callbacks=[callbacks])

# test the model
model.evaluate(test_images, test_labels)


# Exploration Exercises

# this creates a set of classifications for each of the test images,
# and then prints the first entry in the classifications.
# classifications = model.predict(test_images)
# the output is a list of 10 numbers that is the probability that the
# image is each of the 10 classes
# print(classifications[0])
# the list index with the highest value is most likely the class of the image

