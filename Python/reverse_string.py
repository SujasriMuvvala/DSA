def reverse_string(s):
    s = list(s)  # Convert to list for in-place swapping
    left, right = 0, len(s) - 1

    while left < right:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1

    return ''.join(s)

# Example usage
input_str = "hello"
print("Reversed string:", reverse_string(input_str))
