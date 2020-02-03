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
            print(a,b,c,d,e,f,g)
            glass_sum = a+b+c+d+e+f+g
            # print(glass_sum)
            sums.append(glass_sum)
    return max(sums)


def main():
    input_text = open("hourGlassSumInput.txt", "r")
    arr = input_text.read().split('\n')
    for i in range(len(arr)):
        arr[i] = map(int, arr[i].split(' '))
    print(hourGlassSum(arr))
    input_text.close()
main()

