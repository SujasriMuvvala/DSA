Left Rotation of Array by K Positions (By-One Method)
 Problem
Given an array of integers and a number `k`, rotate the array to the left by `k` positions.
📥 Input
- Array: [1, 2, 3, 4, 5]
- k = 2
📤 Output
- [3, 4, 5, 1, 2]
 🧠 Approach
- Use a helper function to rotate the array by one position.
- Repeat that `k` times.
- Normalize k using `k % n`.

 💻 Code File
- [Left_Rotation.c](./Left_Rotation.c)
