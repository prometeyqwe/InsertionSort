import random

def insertion_sort(input_arr):
    N = len(input_arr)
    for i in range(1, N):
        j = i-1
        temp = input_arr[i]
        while j>=0 and temp < input_arr[j] :
            input_arr[j+1] = input_arr[j]
            j-=1
        input_arr[j+1] = temp
    return input_arr

arr = []

for i in range(10):
    arr.append(random.randint(0,100))

#----- using sort -----
print arr
arr = insertion_sort(arr)
print arr
