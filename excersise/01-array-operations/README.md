# Separate Array Operation Exercises

The examples use a `std::vector<int>` inside a class. The data is private and each class exposes one operation through a public method.

| File | Class | Main method | Complexity |
| --- | --- | --- | --- |
| `01_insertion_class.cpp` | `InsertionExercise` | `insertAt` | `O(n)` |
| `02_deletion_class.cpp` | `DeletionExercise` | `deleteAt` | `O(n)` |
| `03_replacement_class.cpp` | `ReplacementExercise` | `replaceAt` | `O(1)` |
| `04_search_class.cpp` | `SearchExercise` | `find` | `O(n)` |
| `05_traversal_class.cpp` | `TraversalExercise` | `display` | `O(n)` |

The key distinction is that insertion changes the vector size, deletion reduces it, replacement keeps the size unchanged, searching returns a position, and traversal visits every element.
