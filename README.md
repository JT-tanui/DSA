# C++ Data Structures and Algorithms Interview Preparation

This repository is a progressive DSA course implemented in C++. The files are ordered from simple array operations to harder interview patterns.

## Study order

1. `01-arrays` - traversal, search, insertion, deletion, reversal, prefix sums, and two-sum.
2. `02-strings` - character counting, palindrome checks, and anagrams.
3. `03-sorting` - elementary sorting followed by merge sort and quicksort.
4. `04-recursion-and-search` - recursion fundamentals and binary search.
5. `05-linked-lists` - node design, traversal, insertion, deletion, and reversal.
6. `06-stacks-and-queues` - balanced brackets, stacks, queues, and sliding-window thinking.
7. `07-trees` - binary-tree traversal and binary-search-tree operations.
8. `08-graphs` - adjacency lists, BFS, and DFS.
9. `09-dynamic-programming` - memoization, tabulation, and 0/1 knapsack.

The difficulty is encoded in every filename: `easy`, `medium`, or `hard`.

## Current file map

| Folder | Implemented exercises |
| --- | --- |
| `01-arrays` | Traversal, linear search, insertion/deletion, reversal, prefix sums, two-sum |
| `02-strings` | Character frequency, palindrome, anagram |
| `03-sorting` | Bubble sort, insertion sort, merge sort, quicksort |
| `04-recursion-and-search` | Factorial, recursive binary search |
| `05-linked-lists` | Iterative reversal, Floyd cycle detection |
| `06-stacks-and-queues` | Balanced parentheses, queue using stacks, next greater element |
| `07-trees` | Inorder traversal, BST search/insert, level-order traversal |
| `08-graphs` | BFS, DFS, Dijkstra shortest paths |
| `09-dynamic-programming` | Climbing stairs, coin change, 0/1 knapsack |

The checklist in `NOTES.md` is intentionally broader than the first implementation batch. The next exercises to add are cycle detection, heaps, shortest paths, topological sorting, and advanced dynamic programming.

## Compiler prerequisite

Install a C++17 compiler before running the compile command. On Windows, MinGW-w64 (`g++`) or Visual Studio Build Tools (`cl`) are suitable options.

## Compile and run one file

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic 01-arrays/01_easy_traverse.cpp -o traverse.exe
./traverse.exe
```

On Windows PowerShell, run the executable as `./traverse.exe`.

## Interview preparation material

- [NOTES.md](NOTES.md): concepts, complexities, and a complete interview checklist.
- [THOUGHT_PROCESS.md](THOUGHT_PROCESS.md): a repeatable method for understanding and solving problems.
- [01-arrays](01-arrays): begin here if array insertion and deletion are your current topic.
- [excersise](excersise): separate class-based array operation exercises.

## Rules for studying each file

1. Read the problem statement in the source file.
2. Solve it on paper before looking at the implementation.
3. State the time and space complexity.
4. Test empty input, one element, duplicates, already sorted input, and boundary indexes.
5. Reimplement the same idea in Java or Python only after the C++ version is clear.
