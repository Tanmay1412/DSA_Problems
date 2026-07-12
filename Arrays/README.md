# DSA Notes – Day 1

# Topic: Arrays

---

# 1. What is an Array?

An **array** is a collection of elements of the **same data type** stored in **contiguous memory locations**.

Example:

```
Index : 0  1  2  3  4
Value : 5  8  1  9  3
```

Each element can be accessed using its index.

---

# 2. Why Arrays?

Arrays are used when:

* Fast access to elements is required.
* The number of elements is known or manageable.
* Data needs to be processed sequentially.

Examples:

* Student marks
* Daily temperatures
* Product prices
* Sensor readings

---

# 3. Properties of Arrays

* Same data type.
* Stored in contiguous memory.
* Fixed size (in most languages like C/C++).
* Index starts from **0**.

---

# 4. Time Complexities

| Operation                           | Complexity                         |
| ----------------------------------- | ---------------------------------- |
| Access                              | O(1)                               |
| Update                              | O(1)                               |
| Traverse                            | O(n)                               |
| Search (Unsorted)                   | O(n)                               |
| Search (Sorted using Binary Search) | O(log n)                           |
| Insert at End                       | O(1) (amortized in dynamic arrays) |
| Insert at Beginning/Middle          | O(n)                               |
| Delete                              | O(n)                               |

**Remember:** Random access is the biggest advantage of arrays.

---

# 5. Basic Operations

### Traversing

Visit every element once.

```
for each element
    process element
```

Complexity: **O(n)**

---

### Finding Maximum

Keep one variable.

```
max = first element

for every element
    if current > max
        update max
```

Complexity: **O(n)**

---

### Finding Minimum

Same logic as maximum.

Complexity: **O(n)**

---

### Sum of Elements

```
sum = 0

for every element
    sum += element
```

Complexity: **O(n)**

---

### Frequency Counting

Example:

```
1 2 2 3 1 1

Frequency

1 → 3
2 → 2
3 → 1
```

Usually solved using a HashMap.

---

# 6. Important Array Patterns

## Pattern 1 – Linear Scan ⭐⭐⭐⭐⭐

Go through the array once.

Used in:

* Maximum
* Minimum
* Sum
* Count
* Search
* Best Time to Buy Stock

---

## Pattern 2 – Running Sum

Instead of calculating repeatedly,

keep adding while moving.

Example

```
1 2 3 4

Running Sum

1
3
6
10
```

Used in:

* Highest Altitude
* Running Sum
* Prefix Sum (foundation)

---

## Pattern 3 – In-place Modification

Modify the existing array without creating another array.

Examples:

* Move Zeroes
* Remove Duplicates
* Remove Element

Saves memory.

---

# 7. Common Interview Tricks

Whenever you see an array, ask yourself:

✅ Can I solve it by scanning once?

✅ Can I keep only one variable?

✅ Can I avoid creating another array?

✅ Can I solve it in O(n)?

These four questions solve many Easy interview problems.

---

# 8. Common Mistakes

❌ Going out of bounds

```
arr[n]
```

Last valid index is

```
arr[n-1]
```

---

❌ Forgetting empty arrays

Always think about:

* n = 0
* n = 1

---

❌ Using extra space unnecessarily

Prefer modifying the original array when allowed.

---

❌ Nested loops without checking

Many O(n²) solutions can become O(n).

---

# 9. Interview Checklist

Before coding ask:

1. What is the input?
2. What is the output?
3. Can I solve it in one pass?
4. Do I need extra space?
5. Can I improve the complexity?

---

# 10. Time Complexity Recognition

If you see

One loop

↓

O(n)

---

Nested loops

↓

O(n²)

---

Half search space every step

↓

O(log n)

---

# 11. Mini Cheat Sheet

Array = Contiguous memory

Access = O(1)

Traverse = O(n)

Search = O(n)

Binary Search = O(log n)

Insert/Delete = O(n)

Main Pattern = Linear Scan

Always check:

* Maximum
* Minimum
* Sum
* Count
* Frequency
* Running Sum
* In-place update

---

# 12. Questions for Day 1

### Question 1

**Find the Highest Altitude** (Easy)

Concept:

* Running Sum
* Linear Scan

---

### Question 2

**Richest Customer Wealth** (Easy)

Concept:

* Row Sum
* Traversal

---

### Question 3

**Find Numbers with Even Number of Digits** (Easy)

Concept:

* Counting
* Traversal

---

# Revision (1 Minute)

✔ Arrays store same-type elements in contiguous memory.

✔ Access is O(1).

✔ Traversing is O(n).

✔ Linear Scan is the most important beginner pattern.

✔ Running Sum is the foundation for Prefix Sum.

✔ Think about optimizing to O(n) and avoiding unnecessary extra space.

**Golden Rule:** Before writing code, identify the pattern first.
