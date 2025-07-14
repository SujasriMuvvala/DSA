def isSorted(arr):
    ascending=True
    descending=True
    for i in range(len(arr)-1):
        if arr[i]>arr[i+1]:
            ascending=False
        if arr[i]<arr[i+1]:
            descending=False
    return ascending or descending
n=int(input("Enter the umber of elements:"))
arr=[]
print("Enter the array elements:")
for i in range(n):
    arr.append(int(input()))
if isSorted(arr):
               print("True")
else:
    print("False")
