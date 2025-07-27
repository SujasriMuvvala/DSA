**SEARCHING ALGORITHM**:
It's one of the basic building blocks of problem-solving in programming.


| Algorithm              | Works On          | Approach                | Time Complexity               | Space Complexity                     | Use Case Example                                     |
| ---------------------- | ----------------- | ----------------------- | ----------------------------- | ------------------------------------ | ---------------------------------------------------- |
| **Linear Search**      | Unsorted / Sorted | Brute Force             | O(n)                          | O(1)                                 | Small datasets or unsorted arrays                    |
| **Binary Search**      | Sorted            | Divide & Conquer        | O(log n)                      | O(1) iterative<br>O(log n) recursive | Large sorted arrays                                  |
| **Ternary Search**     | Sorted            | Divide into 3 parts     | O(log₃ n) ≈ O(log n)          | O(1)                                 | Mathematical optimization problems                   |
| **Jump Search**        | Sorted            | Block-based jumps       | O(√n)                         | O(1)                                 | Search in large sorted arrays                        |
| **Exponential Search** | Sorted            | Double jump then Binary | O(log i), where i is position | O(1)                                 | Unbounded/infinite arrays                            |
| **Fibonacci Search**   | Sorted            | Fibonacci-based split   | O(log n)                      | O(1)                                 | Similar to binary search, but uses Fibonacci numbers |


🧾 Conclusion
Searching algorithms are fundamental to problem-solving and optimization in computer science. Whether dealing with simple datasets or large-scale applications, the right searching approach can significantly improve performance.

Linear Search is intuitive and easy to implement, making it suitable for small or unsorted datasets.

Binary Search is a powerful tool for sorted arrays and is heavily used in technical interviews and real-world systems.

Advanced methods like Ternary Search, Jump Search, and Exponential Search offer specialized advantages in specific scenarios.
