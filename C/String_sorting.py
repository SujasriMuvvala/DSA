def are_anagrams_sort(s1, s2):
    if len(s1) != len(s2):
        return False
    return sorted(s1) == sorted(s2)

# Taking input from user
s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

if are_anagrams_sort(s1, s2):
    print("Anagrams ✅")
else:
    print("Not Anagrams ❌")
