import math

def bSearch(arr, mi, ma):
    guess = (mi+ma)//2
    if arr[guess] <= arr[mi] & arr[guess] <= arr[ma]:
        return arr[guess]
    if ma-mi <= 1:
        if arr[mi] < arr[ma]:
            return arr[mi]
        else:
            return arr[ma]
    else:
        if arr[mi] < arr[ma]:
            return bSearch(arr,mi,guess)
        else:
            return bSearch(arr,guess,ma)

arr = [5, 7, 10, 3, 4]
print( bSearch(arr,0,len(arr) - 1) )


