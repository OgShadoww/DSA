# 📂 [Leniar DS] - Data Structures & Algorithms

## 📌 Overview
This section contains implementations and explanations of **Linear Data Structues** in C++. It includes fundamental concepts, operations, and real-world applications.

## 📖 Topics Covered
✅ **Basic Concept**  
✅ **Time Complexity**  
✅ **Implementation in C++**  
✅ **Common Problems & Solutions**  
✅ **LeetCode / Codeforces Practice Problems**

## 🚀 Implementations
| Data Structure | Code |
|----------------------------|------|
| Dynamic array | [DynamicArray.cpp](./DynamicArray.cpp) |
| Linked List | [LinkedList.cpp](./LinkedList.cpp) |

## 📝 Theory & Explanation
📌 **How it works:** Brief explanation of the concept.  
📌 **Operations & Complexity:** Table of common operations.  
📌 **Real-World Use Cases:** Where it is used in real applications.  

## 💡 Practice Problems
- 🔥 **LeetCode:** [Problem Name](https://leetcode.com/problems/example/)
- 🏆 **Codeforces:** [Problem Name](https://codeforces.com/problemset/problem/example)
- 📚 **Additional Resources:** Link to external references.

---

### **📌 README.md for `Array` Folder**
Here’s the **specific README.md** for the `Array` folder inside `DataStructures/Array/`.

```md
# 📂 Array - Data Structure

## 📌 Overview
Arrays are the **most fundamental** data structure in computer science. They provide a **contiguous memory allocation**, making them efficient for indexed access.

In this section, we cover:
✅ **Static vs Dynamic Arrays**  
✅ **Operations (Insertion, Deletion, Search, Access, Resize)**  
✅ **Efficient Algorithms (Two Pointers, Sliding Window, Kadane’s Algorithm)**  
✅ **Real-World Applications**  

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

## 🚀 Implementations
| Algorithm / Data Structure | Code |
|----------------------------|------|
| Static Array Implementation | [StaticArray.cpp](./StaticArray.cpp) |
| Dynamic Array (Manual Implementation) | [DynamicArray.cpp](./DynamicArray.cpp) |
| Custom C++ Vector | [CustomVector.cpp](./CustomVector.cpp) |
| Prefix Sum Array | [PrefixSum.cpp](./PrefixSum.cpp) |
| Sliding Window Technique | [SlidingWindow.cpp](./SlidingWindow.cpp) |
| Two Pointers Technique | [TwoPointers.cpp](./TwoPointers.cpp) |

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

## 💡 Common Array Problems (LeetCode / Codeforces)
| Problem | Difficulty | Solution |
|---------|-----------|----------|
| 🔥 [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | [Solution](./TwoSum.cpp) |
| 🔥 [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | [Solution](./BuySellStock.cpp) |
| 🔥 [Kadane’s Algorithm (Max Subarray Sum)](https://leetcode.com/problems/maximum-subarray/) | Medium | [Solution](./Kadane.cpp) |
| 🔥 [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | Hard | [Solution](./SlidingWindowMaximum.cpp) |

---