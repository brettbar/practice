def rotLeft(a, d):
  for i in range(d):
    first = a[0]
    a.remove(first)
    a.append(first)
  print_str = ''
  for num in a:
    print_str += str(num) + ' '
    print(print_str)
  print_str = print_str[0:len(print_str)]
  return print_str

def main():
  arr = [41, 73, 89, 7, 10, 1, 59, 58, 84, 77, 77, 97, 58, 1, 86, 58, 26, 10, 86, 51]
  d = 10
  print(rotLeft(arr, d))

if __name__ == "__main__":
  main()