import math
import os
import random
import re
import sys

def main():
    # ===========================================================
    # <EASY>
    # input_text = open("hourGlassSumInput.txt", "r")
    # arr = input_text.read().split('\n')
    # for i in range(len(arr)):
    #     arr[i] = map(int, arr[i].split(' '))
    # print(hourGlassSum(arr))
    # input_text.close()

    # print(rotLeft([41, 73, 89, 7, 10, 1, 59, 58, 84, 77, 77, 97, 58, 1, 86, 58, 26, 10, 86, 51], 10))
    # </EASY>
    # ===========================================================
    pass

# https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
def hourGlassSum(arr):
    sums = []
    for x in range(len(arr) - 2):
        for y in range(len(arr[0]) - 2):
            a = arr[x][y]
            b = arr[x][y+1]
            c = arr[x][y+2]
            d = arr[x+1][y+1]
            e = arr[x+2][y]
            f = arr[x+2][y+1]
            g = arr[x+2][y+2]      
            glass_sum = a+b+c+d+e+f+g
            sums.append(glass_sum)
    return max(sums)

# https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
def rotLeft(a, d):
  for i in range(d):
    first = a[0]
    a.remove(first)
    a.append(first)
  print(a)
  return a


if __name__ == '__main__':
   main()


