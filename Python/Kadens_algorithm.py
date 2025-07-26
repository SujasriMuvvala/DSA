def maxsubarray(arr):
    max_array=arr[0]
    current_sum=arr[0]
    start=0
    end=0
    temp_start=0
    for i in range(1,len(arr)):
        if current_sum+arr[i]>arr[i]:
            current_sum+=arr[i]
        else:
            current_sum=arr[i]
            temp_start=i
        if current_sum>max_array:
            max_array=current_sum
            start=temp_start
            end=i
    print("Maximum Sum of SubArray:",max_array)
    print("SubArray:",arr[start:end+1])
arr=[-1,-2,3,4,5,6,-9,10,11,-7]
maxsubarray(arr)
