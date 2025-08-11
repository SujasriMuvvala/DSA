def first_occurrence(arr, key):
    low, high = 0, len(arr) - 1
    result = -1
    
    while low <= high:
        mid = (low + high) // 2
        
        if arr[mid] == key:
            result = mid        
            high = mid - 1     
        elif arr[mid] > key:
            high = mid - 1
        else:
            low = mid + 1
    
    return result


# Example usage
arr = [1, 2, 2, 2, 3, 4]
key = 2
index = first_occurrence(arr, key)

if index != -1:
    print(f"First occurrence of {key} is at index {index}")
else:
    print(f"{key} not found in array")
