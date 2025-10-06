# 📂 [Leniar DS] - Data Structures & Algorithms

## 📌 Overview
This section contains implementations and explanations of **Linear Data Structues** in C++. It includes fundamental concepts, operations, and real-world applications.

## 📖 Topics Covered
✅ **Basic Concept**  
✅ **Time Complexity**  
✅ **Implementation in C++**  
✅ **Efficient Algorithms (Two Pointers, Sliding Window, Kadane’s Algorithm)**  
✅ **LeetCode / Codeforces Practice Problems**

## 🚀 Implementations
| Data Structure | Code |
|----------------------------|------|
| Dynamic array | [DynamicArray.cpp](./DynamicArray.cpp) |
| Linked List | [LinkedList.cpp](./LinkedList.cpp) |


---

# Arrays:

## 📖 Time Complexity of Array Operations

| Operation        | Time Complexity |
|-----------------|----------------|
| Access (indexing) | **O(1)** |
| Insert at End | **O(1)** (Amortized for dynamic arrays) |
| Insert at Beginning | **O(n)** |
| Insert at Middle | **O(n)** |
| Delete from End | **O(1)** |
| Delete from Beginning | **O(n)** |
| Delete from Middle | **O(n)** |
| Search (Linear Search) | **O(n)** |
| Search (Binary Search - Sorted) | **O(log n)** |


## 📝 Theory & Explanation

### Definition: 
-Static Array is contiguous block of memory, that has indexed access and fixed size
-Dynamic Array is also contiguous block of memory, but do memory rellocation when memory is full

### Static vs Dynamic:
-Static array: Declared with a fixed size, stored in a stack memory (faster but limited), Cannot resize dynamically.
-Dynamic array: Use heap memory, slower but larger, automatic resize

---
