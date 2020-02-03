#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    num_swaps = 0
    
    n = len(arr)
    print(arr)
    for i in range(n):
      print(arr)
    return num_swaps

def isSorted(arr):
    for i in range(len(arr)):
        if (i == len(arr) - 1):
            return True # if we are at the last index and it hasn't failed yet, we good fam
        elif (arr[i] > arr[i+1]):
            return False # if the current value is greater than the next, it ain't sorted cap'
    return True

if __name__ == '__main__':
    print(minimumSwaps([2, 3, 4, 1, 5]))
