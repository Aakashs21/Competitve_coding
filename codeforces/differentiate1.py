
import math
import numpy as np
import matplotlib.pyplot as plt
import sympy
from sympy import *

t = int(input("\tEnter the number for the function to apply:\n\t 1 : Sigmoid\n\t 2 : Tanh\n\t 3 : reLU\n\t"))
if (t == 1):
   
    n = int(input("Enter the number of elements : "))

    in_array = list(
        map(int, input("\nEnter the numbers : ").strip().split()))[:n]
    numpyArr= np.array(in_array)
    out_array = []

    for i in range(len(in_array)):
        out_array.append((np.exp(-in_array[i])/(1 + np.exp(-in_array[i]))**2))
        i += 1

    print("Input_Array : \n", in_array)
    print("\nDifferentiated Output_Array : \n", out_array)
    
   

if (t == 2):
    n = int(input("Enter the number of elements : "))

    in_array = list(
        map(int, input("\nEnter the numbers : ").strip().split()))[:n]

    out_array = []

    for i in range(len(in_array)):
        out_array.append(1-(math.tanh(in_array[i]))**2)
        i += 1

    print("Input_Array : \n", in_array)
    print("\nDifferentiated Output_Array : \n", out_array)

  
if (t == 3):
    n = int(input("Enter the number of elements : "))

    in_array = list(
        map(int, input("\nEnter the numbers : ").strip().split()))[:n]

    out_array = []

    for i in range(len(in_array)):
        if (in_array[i > 0]):
            out_array.append(1)
            i += 1
        else:
            out_array.append(0)

    print("Input_Array : \n", in_array)
    print("\nDifferentiated Output_Array : \n", out_array)

   