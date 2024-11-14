# Unlock the power of C
I am recording my progress in learning C. 
## Table of contents
### Learning Approach
1. Learn C
   - **Courses**
      - C Programming, Ahmed Abdelghafar (Part of Embedded Systems Diploma)
   - **Books**
      - The C Programming Language, 2nd Edition (aka: K&R) -> You can  follow along with dr. chuck on FCC 
      - Understanding and Using C Pointers, Richard Reese
3. C Standard Library
4. Data Structures in C
5. Implement C Standard Library Functions

### **Basic projects**
---
  - [Hello World](https://github.com/mo-tarek/mastering-c/blob/main/src/hello.c)
  - [Simple Calculator](https://github.com/mo-tarek/mastering-c/blob/main/src/simple_calculator.c)
  - [Temperature Converter](https://github.com/mo-tarek/mastering-c/blob/main/src/temperature_converter.c)
  - [Basic File I/O](https://github.com/mo-tarek/mastering-c/blob/main/src/basic-file-io.c)
  - [Number Guessing Game](https://github.com/mo-tarek/mastering-c/blob/main/src/num-guess-game.c)
  - [Factorial Calculator](https://github.com/mo-tarek/mastering-c/blob/main/src/factorial.c)
  - [Fibonacci Sequence Generator](https://github.com/mo-tarek/mastering-c/blob/main/src/fibonacci-generator.c)
  - [Basic Alarm Clock](https://github.com/mo-tarek/mastering-c/blob/main/src/basic-alarm-clock.c)
  - [Palindrome Checker](https://github.com/mo-tarek/mastering-c/blob/main/src/palindrome-checker.c)
  - [Basic Encryption/Decryption](https://github.com/mo-tarek/mastering-c/blob/main/src/encryption-decryption.c)
### **Uncategorized yet**
---
  - Text Editor `in-progress`

### **OOP in C**
1. Encapsulation
    - Encapsulation can be achieved using structures to group related data and functions.
2. Inheritance
    - Inheritance can be simulated by creating a structure that contains another structure.
3. Polymorphism
    - Polymorphism can be implemented using function pointers.
### **Data Structures**
---
  - [Introduction to data structures](https://github.com/mo-tarek/mastering-c/blob/main/src/intro-to-ds.md)
  - Concepts: Encapsulation & ADT
  - Array
      - [Dynamic Array](https://github.com/mo-tarek/mastering-c/blob/main/src/dynamic-array.c) [aka. Vector in C++]
      - Multi-dimensional Array
          - [2D Array](https://github.com/mo-tarek/mastering-c/blob/main/src/2d-array.c)
          - [3D Array](https://github.com/mo-tarek/mastering-c/blob/main/src/3d-array.c)
  - Stack
    - [Array-based implementation](https://github.com/mo-tarek/mastering-c/blob/main/src/stack-using-array.c)
    - [Linked-based implementation](https://github.com/mo-tarek/mastering-c/blob/main/src/stack-using-linked-list.c)
  - Queue
    - [Array-based implementation](https://github.com/mo-tarek/mastering-c/blob/main/src/queue-using-array.c)
    - [Linked-based implementation](https://github.com/mo-tarek/mastering-c/blob/main/src/queue-using-linked-list.c)
    - [Circular Queue](https://github.com/mo-tarek/mastering-c/blob/main/src/circular-queue.c)
    - Priority Queue
        - [Priority Queue using Max-Heap](https://github.com/mo-tarek/mastering-c/blob/main/src/priority-queue-using-max_heap.c)
        - [Priority Queue using Min-Heap](https://github.com/mo-tarek/mastering-c/blob/main/src/priority-queue-using-min_heap.c)
    - Abstraction & implementation-related issues
  - Linked List
      - [Singly-linked list](https://github.com/mo-tarek/mastering-c/blob/main/src/singly-linked-list.c)
      - [Doubly-linked list](https://github.com/mo-tarek/mastering-c/blob/main/src/doubly-linked-list.c)
      - [Circular-linked list](https://github.com/mo-tarek/mastering-c/blob/main/src/circular-linked-list.c)
  - Search and analysis of algorithms
  - Analysis of binary search algorithm
  - Trees
  - Binary Search Trees [BST]
  - Binary Heap
  - AVL Tree
  - Letter Tree [Trie]
  - [Hash Table](https://github.com/mo-tarek/mastering-c/blob/main/src/hash-table.c)
  - Circular Buffer

### **Algorithms**
- Complexity Analysis
- Sorting [Insertion, Selection and Count]
- Searching: Binary Search
-  Graph Representation
-  Graph Depth-First Search
-  Graph Breadth-First Search
-  Topological Sorting
-  Dynamic Programming
    - Pick or Leave Pattern
    - Enumerating The Choices
    - Range Patterns
    - Counting
    - DP on Grid
    - Building Output
    - Tabulation
    - Marathon
-  Backtracking
-  Divide and Conquer
-  Graph: Shortest Path, Floyed-Warshall
-  Graph: Shortest Path, Bellman-Ford
-  Graph: Shortest Path, Dijkstra
-  Graph: MST, Prim
-  Graph: MST, Kruksal
-  Others [TODO-> Organize Later]:
    - [Mostafa Saad Ibrahim On Quora](https://qr.ae/prjdjG)

### **The C Standard Library**
1. `<stdio.h>`: **Standard Input/Output Library**
- Provides functions for performing input and output operations, such as reading from and writing to files and standard streams.
2. `<stdlib.h>`: **Standard Library Functions**
- Contains functions for memory allocation, process control, conversions, and other utility functions.
3. `<limits.h>`: **Limits of Integral Types**
- Defines constants that specify the limits of integral data types (e.g., maximum and minimum values).
4. `<math.h>`: **Mathematics Library**
- Provides mathematical functions such as trigonometric, exponential, logarithmic, and power functions.
5. `<assert.h>`: **Assertions Library**
- Provides a macro to enable runtime assertions that help catch programming errors by validating conditions.
6. `<stdbool.h>`: **Boolean Type Support**
- Defines the `bool` type and constants `true` and `false` for better readability in Boolean logic.
7. `<string.h>`: **String Handling Library**
- Contains functions for manipulating C strings and arrays, such as copying, concatenation, and comparison.
8. `<stddef.h>`: **Standard Definitions**
- Defines common types and macros, including `size_t`, `ptrdiff_t`, and `NULL`.
9. `<complex.h>`: **Complex Number Support**
- Provides support for complex number arithmetic, including functions for mathematical operations on complex numbers.
10. `<ctype.h>`: **Character Type Handling**
- Defines functions for character classification and conversion, such as checking for alphabetic characters or converting case.
11. `<errno.h>`: **Error Number Definitions**
- Provides macros for reporting and retrieving error conditions in library functions.
12. `<fenv.h>`: **Floating-Point Environment**
- Defines functions for managing floating-point exceptions and controlling floating-point rounding behavior.
13. `<float.h>`: **Floating-Point Limits**
- Defines exact-width integer types and macros for format specifiers, ensuring portability across platforms.
15. `<inttypes.h>`: **Integer Types and Macros**
- Defines exact-width integer types and macros for format specifiers, ensuring portability across platforms.
16. `<iso646.h>`: **ISO 646 Alternatives Representations**
- Provides alternative representations for certain operators (e.g., `and`, `or`, `not`) for better readability.
17. `<locale.h>`: **Localization Support**
- Provides functions and macros for handling locale-specific information, including number formatting and character classification.
18. `<setjmp.h>`: **Nolocal Jumps**
- Defines macros for performing nonlocal jumps, allowing the program to jump back to a specific point in the code.
19. `<signal.h>`: **Signal Handling**
- Provides mechanisms for handling asynchronous events (signals) that can occur during program execution.
20. `<stdalign.h>`: **Standard Alignment**
- Defines macros for specifying the alignment of structures and other types, ensuring proper memory alignment.
21. `<stdarg.h>`: **Variable Arguments Handling**
- Defines macros for handling functions with a variable number of arguments.
22. `<stdatomic.h>`: **Atomic Operations**
- Provides atomic types and operations for multi-threaded programming, ensuring data consistency without locks.
23. `<stdbit.h>`: **Bit Manipulation**
- Provides macros for manipulating individual bits in integers, including set, clear, and toggle operations.
24. `<stdint.h>`: **Fixed-width Integer Types**
- Defines fixed-width integer types (e.g., `int32_t`, `uint64_t`) to promote portability across platforms.
25. `<stdnoreturn.h>`: **Noreturn Function Specifier**
- Defines the `noreturn` attribute for functions that do not return to the calling function, enhancing code clarity.
26. `<tgmath.h>`: **Type-Generic Math**
- Provides type-generic versions of mathematical functions, allowing for automatic type selection based on the argument type
27. `<threads.h>`: **Thread Support**
- Provides types and functions for multi-threading, including thread management and synchronization primitives.
28. `<time.h>`: **Time and Date Utilities**
- Contains functions for manipulating and formatting time and date, including time measurement.
29. `<uchar.h>`: **Unicode Character Handling**
- Provides functions and types for handling Unicode characters and strings.
30. `<wchar.h>`: **Wide Character Support**
- Provides functions for handling wide characters and strings, useful for internationalization.
31. `<wctype.h>`: **Wide Character Type Handling**
- Defines functions for character classification and case conversion for wide characters.
### Problem Solving
1. NeetCode Roadmap
2. Assuit sheets
3. Alazhar Sheets
4. Dr. Mostafa Saad Sheets

### Resources
- [Beej's guide to C programming](https://beej.us/guide/bgc/html/split/) `in-progress`
- [C Project-based tutorials](https://github.com/nCally/Project-Based-Tutorials-in-C)
- [Build your own x](https://github.com/codecrafters-io/build-your-own-x)
- [Awesome C](https://github.com/oz123/awesome-c)
- [Alogrithms in C](https://github.com/TheAlgorithms/C)
