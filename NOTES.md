# DSA Interview Notes

## What this topic is

Insertion and deletion of an array are part of the **array data structure** topic, which belongs to **Data Structures and Algorithms**. Arrays are linear data structures: elements are arranged in a sequence and, in a normal C++ array, occupy contiguous memory.

## Array fundamentals

For an array `values`:

- Access by index: `values[index]`, `O(1)`
- Traversal: visit every value, `O(n)`
- Linear search: `O(n)`
- Binary search on sorted data: `O(log n)`
- Insert/delete at the beginning or middle: `O(n)` because values shift
- Insert/delete at the end: `O(1)` when capacity and implementation permit it
- Static C++ arrays have fixed size; `std::vector` grows dynamically

When inserting at position `p`, move elements from right to left before writing the new value. When deleting at `p`, move elements from left to right to close the gap. Always validate the logical size and index.

## C++ tools to know

- C-style array: `int values[5]`
- Dynamic array: `std::vector<int>`
- Iterators: `values.begin()` and `values.end()`
- Useful vector operations: `push_back`, `pop_back`, `insert`, `erase`, `size`
- References and pointers
- `struct` and `class`
- `const`, pass-by-reference, and RAII
- Standard algorithms such as `sort`, `reverse`, `find`, and `lower_bound`

## Interview checklist

### Arrays and strings

- Traversal and in-place updates
- Insertion and deletion with shifting
- Reverse an array or string
- Min/max and second-largest value
- Remove duplicates from sorted data
- Move zeroes to the end
- Rotate an array
- Prefix sums and subarray sums
- Two-sum and three-sum
- Sliding window and two pointers
- Frequency maps and anagrams
- Palindromes and longest substring without repeats

### Searching and sorting

- Linear and binary search
- First/last occurrence and search boundaries
- Bubble, selection, and insertion sort
- Merge sort and quicksort
- Stability, in-place sorting, and worst cases
- `lower_bound` and `upper_bound`

### Linked lists

- Node creation and traversal
- Insert/delete at a position
- Reverse a list
- Find the middle node
- Detect a cycle with fast and slow pointers
- Merge two sorted lists
- Remove the Nth node from the end

### Stacks and queues

- Stack using an array or vector
- Queue using a circular array
- Balanced parentheses
- Min stack
- Queue using two stacks
- Monotonic stack and next greater element
- Sliding-window maximum

### Trees and heaps

- Preorder, inorder, postorder, and level-order traversal
- Height and leaf count
- Binary-search-tree search, insert, and delete
- Lowest common ancestor
- Validate a BST
- Heap operations and priority queues
- Top K elements

### Graphs

- Adjacency matrix versus adjacency list
- BFS and DFS
- Connected components
- Cycle detection
- Topological sorting
- Shortest paths with BFS and Dijkstra
- Union-Find / Disjoint Set Union

### Dynamic programming

- Identify state, choice, base case, and transition
- Memoization versus tabulation
- Climbing stairs and house robber
- 0/1 knapsack
- Coin change
- Longest common subsequence
- Longest increasing subsequence
- Grid paths

## Complexity reminders

Prefer the simplest correct solution first. Then ask whether repeated work can be removed with sorting, hashing, a pointer invariant, a stack, a queue, or dynamic programming. Explain both time complexity and auxiliary space complexity in an interview.
