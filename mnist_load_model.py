import tensorflow as tf
from tensorflow import keras
from tensorflow.python.keras.utils import np_utils
import numpy as np
from numpy import argmax
import matplotlib.pyplot as plt
from tensorflow.keras import backend as K

mnist = tf.keras.datasets.mnist
keras_mnist_model = './model.h5'

new_model = keras.models.load_model(keras_mnist_model)
new_model.summary()

num_classes = 10
# input image dimensions
img_rows, img_cols = 28, 28
(x_train,y_train),(x_test,y_test)=mnist.load_data()
# the data, split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train = x_train[1:10000]
y_train = y_train[1:10000]
x_test = x_test[1:1000]
y_test = y_test[1:1000]
if K.image_data_format() == 'channels_first':
    x_train = x_train.reshape(x_train.shape[0], 1, img_rows, img_cols)
    x_test = x_test.reshape(x_test.shape[0], 1, img_rows, img_cols)
    input_shape = (1, img_rows, img_cols)
else:
    x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)
    x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)
    input_shape = (img_rows, img_cols, 1)


x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
# convert class vectors to binary class matrices
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
xhat_idx = np.random.choice(x_test.shape[0],5)
xhat = x_test[xhat_idx]

y_prob = new_model.predict(xhat)
yhat = y_prob.argmax(axis=-1)

for i in range(5):
    print('Index: ',xhat_idx[i],'[True: ',str(argmax(y_test[xhat_idx[i]])),', Predict: ',str(yhat[i]),']')
