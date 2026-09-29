# Problem-Solving Thought Process

Use this procedure for every exercise.

## 1. Restate the problem

Identify the input, required output, constraints, and whether the input is sorted or mutable.

## 2. Work through a small example

Include an empty case, a one-element case, duplicates, and a boundary case. Write down the expected answer before coding.

## 3. Start with a direct solution

Use the data structure that mirrors the problem. For an array insertion, the key operation is shifting elements without overwriting values that still need to move.

## 4. State an invariant

An invariant is what remains true after every loop iteration. Example: during insertion, all values at indexes greater than the insertion position have already been moved one place to the right.

## 5. Check boundaries

Ask what happens when the input is empty, the position is invalid, the target is absent, the value is duplicated, or the structure is full.

## 6. Analyze complexity

Count how many elements can be visited or moved. State auxiliary memory separately from the input storage.

## 7. Test deliberately

Use normal, smallest, largest, already ordered, reverse ordered, duplicate, and invalid-input cases.

## 8. Translate only after understanding

The algorithm is language-independent. In Java, use arrays, `ArrayList`, `HashMap`, and classes. In Python, use lists, dictionaries, sets, and classes. Preserve the invariant and complexity rather than translating syntax line by line.
