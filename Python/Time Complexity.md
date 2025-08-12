| **Topic**                           | **Operation**                                   | **Best / Avg / Worst Time Complexity** | **Space Complexity** |      |
| ----------------------------------- | ----------------------------------------------- | -------------------------------------- | -------------------- | ---- |
| **Arrays**                          | Access                                          | O(1)                                   | O(1)                 |      |
|                                     | Search (Linear)                                 | O(n) / O(n) / O(n)                     | O(1)                 |      |
|                                     | Search (Binary on sorted)                       | O(1) / O(log n) / O(log n)             | O(1)                 |      |
|                                     | Insert/Delete at end                            | O(1)                                   | O(1)                 |      |
|                                     | Insert/Delete at start                          | O(n)                                   | O(1)                 |      |
| **Strings**                         | Compare                                         | O(n)                                   | O(1)                 |      |
|                                     | Reverse                                         | O(n)                                   | O(1)                 |      |
| **Sorting**                         | Bubble Sort                                     | O(n) / O(n²) / O(n²)                   | O(1)                 |      |
|                                     | Selection Sort                                  | O(n²)                                  | O(1)                 |      |
|                                     | Insertion Sort                                  | O(n) / O(n²) / O(n²)                   | O(1)                 |      |
|                                     | Merge Sort                                      | O(n log n)                             | O(n)                 |      |
|                                     | Quick Sort                                      | O(n log n) / O(n log n) / O(n²)        | O(log n)             |      |
| **Hashing / Hash Map**              | Search / Insert / Delete                        | O(1) avg, O(n) worst (collision)       | O(n)                 |      |
| **Linked List (Singly)**            | Access                                          | O(n)                                   | O(1)                 |      |
|                                     | Search                                          | O(n)                                   | O(1)                 |      |
|                                     | Insert/Delete at head                           | O(1)                                   | O(1)                 |      |
|                                     | Insert/Delete at tail                           | O(n)                                   | O(1)                 |      |
| **Stack**                           | Push / Pop                                      | O(1)                                   | O(n)                 |      |
| **Queue**                           | Enqueue / Dequeue                               | O(1)                                   | O(n)                 |      |
| **Binary Search Tree (Balanced)**   | Search / Insert / Delete                        | O(log n)                               | O(n)                 |      |
| **Binary Search Tree (Unbalanced)** | Search / Insert / Delete                        | O(n)                                   | O(n)                 |      |
| **Heap**                            | Insert / Delete Max                             | O(log n)                               | O(n)                 |      |
| **Graph (Adjacency List)**          | BFS / DFS                                       | O(V + E)                               | O(V + E)             |      |
| **Graph (Adjacency Matrix)**        | BFS / DFS                                       | O(V²)                                  | O(V²)                |      |
| **Dijkstra (using min-heap)**       | O((V + E) log V)                                | O(V + E)                               |                      |      |
| **Bellman-Ford**                    | O(VE)                                           | O(V)                                   |                      |      |
| **Kruskal’s MST**                   | O(E log E)                                      | O(V)                                   |                      |      |
| **Prim’s MST (min-heap)**           | O((V + E) log V)                                | O(V + E)                               |                      |      |
| **Dynamic Programming**             | Depends on state size: often O(n), O(n²), O(n³) | O(n) to O(n²)                          |                      |      |
| **Trie**                            | Insert/Search                                   | O(L) where L = word length             | O(ALPHABET × L × N)  |      |
| **Bit Manipulation**                | Common ops (&,                                  | , ^, <<, >>)                           | O(1)                 | O(1) |
| **Segment Tree**                    | Build                                           | O(n)                                   | O(4n)                |      |
|                                     | Query / Update                                  | O(log n)                               | O(4n)                |      |
| **Fenwick Tree (BIT)**              | Update / Query                                  | O(log n)                               | O(n)                 |      |
________________________________________________________________________________________________________________________________________________________________
