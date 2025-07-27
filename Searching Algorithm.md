| Algorithm          | Best Case | Average Case         | Worst Case | When Best Case Happens                 |
| ------------------ | --------- | -------------------- | ---------- | -------------------------------------- |
| **Linear Search**  | O(1)      | O(n)                 | O(n)       | Key is at the first index              |
| **Binary Search**  | O(1)      | O(log n)             | O(log n)   | Key is at the middle of the array      |
| **Ternary Search** | O(1)      | O(log₃ n) ≈ O(log n) | O(log n)   | Key is at one of the two mid positions |

📘 What is O(log n)?
O(log n) means the number of operations increases slowly as the input size n increases.
This happens when the algorithm divides the input into parts every time — like Binary Search.
📘 What is O(n)?
O(n) is a way to describe the time complexity (or runtime) of an algorithm using Big O notation.
It means:
"As the size of the input (n) increases, the number of steps the algorithm takes grows linearly with n."
| Time Complexity | Growth Rate | Example Algorithm          |
| --------------- | ----------- | -------------------------- |
| O(1)            | Constant    | Accessing array element    |
| O(n)            | Linear      | Linear Search              |
| **O(log n)**    | Logarithmic | **Binary Search**          |
| O(n²)           | Quadratic   | Nested loops (Bubble Sort) |

