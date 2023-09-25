def bubbleSort(arr) :
    n = len(arr) - 1
    for i in range(n) :
        for j in range(0,n-i) :
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]

arr = [1, 0, 2, 4, 3]
bubbleSort(arr)
assert arr == [0, 1, 2, 3, 4], arr