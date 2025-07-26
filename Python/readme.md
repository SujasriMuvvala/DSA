Kadane's Algorithm in Python 🐍

This project demonstrates the implementation of **Kadane’s Algorithm** using Python. It efficiently finds the **maximum sum of a continuous subarray** within a one-dimensional list of integers — and also prints the subarray itself.

---

🔍 What is Kadane’s Algorithm?

Kadane's Algorithm is a popular and efficient method used to solve the **maximum subarray problem**. The goal is to identify a **contiguous part of an array** where the sum of elements is the highest possible.

It solves the problem in **linear time O(n)** using a greedy + dynamic programming approach.

---

✅ Features

- Written in clean and readable Python
- Handles arrays with negative and mixed numbers
- Tracks the **maximum sum** and **actual subarray**
- Uses index tracking (`start`, `end`) for accurate slicing
- Perfect for learning and interview prep

---

🧠 Algorithm Logic

- Traverse the array while keeping track of:
  - `current_sum`: The running sum of the current subarray
  - `max_so_far`: The best sum found so far
- Decide whether to:
  - Extend the current subarray (`current_sum + arr[i]`)
  - Start a new one from `arr[i]`
- Update start/end indexes to print the final subarray

