Kadane's Algorithm in C 💻

This project provides a clean and efficient implementation of **Kadane's Algorithm** in the C programming language. The algorithm is designed to find the **maximum sum of any continuous (contiguous) subarray** within a one-dimensional integer array.

---

🔍 Problem Overview

In real-world data, we often need to analyze trends or streaks of positive performance — such as profits, temperature changes, mood scores, or net values over time. These trends can be represented as arrays containing both positive and negative numbers.  

The challenge is to identify a **continuous segment (subarray)** where the sum of the values is the highest possible. This segment may be located anywhere in the array.

---

🧠 About Kadane’s Algorithm

Kadane’s Algorithm is a popular dynamic programming technique that solves this problem efficiently in **O(n) time**, using a simple idea:

- As we traverse the array, we **keep track of the current running sum**
- If adding the next element increases our current sum, we include it
- If it decreases the sum, we **start a new subarray** from that element
- At every step, we compare the running sum with the best sum so far

This greedy and efficient approach helps avoid unnecessary nested loops and provides the result in a single pass.

---

 ✅ Features of This Implementation

- Written in pure C for clarity and educational value
- Uses basic logic and conditional checks
- Suitable for arrays containing negative numbers, zeros, or mixed values
- Ideal for learning the core idea behind dynamic subarray sum problems
- Prints only the **maximum subarray sum**, not the subarray itself (minimal output)
