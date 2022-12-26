import numpy

my_array = numpy.array([])
a=int(input("Size of array:"))
for i in range(a):
    x=float(input("Element:"))
    numpy.append(x)

print(numpy.floor(my_array))