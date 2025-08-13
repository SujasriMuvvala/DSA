| Algorithm      | Best Case  | Worst Case | Average Case | Space Complexity | Stable? |
| -------------- | ---------- | ---------- | ------------ | ---------------- | ------- |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)        | O(1)             | ✅ Yes   |
| Selection Sort | O(n²)      | O(n²)      | O(n²)        | O(1)             | ❌ No    |
| Insertion Sort | O(n)       | O(n²)      | O(n²)        | O(1)             | ✅ Yes   |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n)   | O(n)             | ✅ Yes   |
| Quick Sort     | O(n log n) | O(n²)      | O(n log n)   | O(log n)         | ❌ No    |
-----------------------------------------------------------------------------------------
🔹 Bubble Sort
Compare adjacent elements, swap if needed.

Repeat until the array is sorted.

Best for learning, not for performance.

🔹 Selection Sort
Find the minimum element in the unsorted part and swap with the first unsorted element.

Fewer swaps but still O(n²).

🔹 Insertion Sort
Pick elements one by one and insert them into the correct position in the already sorted part.

Good for small arrays or nearly sorted data.

🔹 Merge Sort
Divide array into halves, sort each half, and merge them.

Always O(n log n) — stable and reliable.

🔹 Quick Sort
Pick a pivot element, partition array so smaller numbers are on one side, bigger on the other, and recursively sort both parts.

Very fast in practice but worst case is O(n²).
