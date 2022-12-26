
import math

from sympy import *

t = int(input("\tEnter the number for the function to apply:\n\t 1 : Sigmoid\n\t 2 : Tanh\n\t 3 : reLU\n\t"))
if (t == 1):
    x = np.linspace(-100, 100, 200)
    z = 1/(1 + np.exp(-x))
    n = int(input("Enter the number of elements : "))

    in_array = list(
        map(int, input("\nEnter the numbers : ").strip().split()))[:n]
    numpyArr= np.array(in_array)
    out_array = []

    for i in range(len(in_array)):
        out_array.append(1/(1 + np.exp(-in_array[i])))
        i += 1

    print("Input_Array : \n", in_array)
    print("\nOutput_Array : \n", out_array)
    plt.plot(in_array, out_array, "go-")
    plt.title("Sigmoid(x)")
    plt.xlabel("X")
    plt.ylabel("Y")
    plt.show()


if (t == 2):
    n = int(input("Enter the number of elements : "))

    in_array = list(
        map(int, input("\nEnter the numbers : ").strip().split()))[:n]

    out_array = []

    for i in range(len(in_array)):
        out_array.append(math.tanh(in_array[i]))
        i += 1

    print("Input_Array : \n", in_array)
    print("\nOutput_Array : \n", out_array)

    plt.plot(in_array, out_array, "go-")
    plt.title("math.tanh()")
    plt.xlabel("X")
    plt.ylabel("Y")
    plt.show()

if (t == 3):
    n = int(input("Enter the number of elements : "))

    in_array = list(
        map(int, input("\nEnter the numbers : ").strip().split()))[:n]

    out_array = []

    for i in range(len(in_array)):
        if (in_array[i > 0]):
            out_array.append((in_array[i]))
            i += 1
        else:
            out_array.append(0)

    print("Input_Array : \n", in_array)
    print("\nOutput_Array : \n", out_array)

    plt.plot(in_array, out_array, "go-")
    plt.title("reLU function")
    plt.xlabel("X")
    plt.ylabel("Y")
    plt.show()
