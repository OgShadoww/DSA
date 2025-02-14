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

# Arrays:
---

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

---

## 📝 Theory & Explanation
### 📌 **Static vs. Dynamic Arrays**
- **Static Array:** Fixed size, allocated at compile-time.
- **Dynamic Array:** Can grow/shrink, allocated at runtime.

### 📌 **Contiguous Memory Allocation**
Arrays are stored in contiguous memory blocks, allowing **O(1) access** via indexing.

### 📌 **Dynamic Resizing Strategy**
A dynamic array (like `std::vector`) **doubles its size** when full, reducing overall complexity.

### 📌 **Memory Usage**
- **Static Array:** Memory allocated at **compile-time**.
- **Dynamic Array:** Uses `new[]` and `delete[]` in C++.

---
