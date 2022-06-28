import tensorflow as tf
from matplotlib import pyplot as plt
from tensorflow.keras.datasets import mnist
(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train = x_train[1:10000]
y_train = y_train[1:10000]
x_test = x_test[1:1000]
y_test = y_test[1:1000]
x_test.shape
im = x_test[174]
im.shape
plt.imshow(im)
plt.show()

print(y_test[174]) 
