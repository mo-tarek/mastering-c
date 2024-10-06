# Unlock the power of C
I am recording my progress in learning C. 
## Table of contents
### Learning Approach
<ol>
    <li>Learn C</li>
    <li>C standard library</li>
    <li>Data Structures in C</li>
    <li>Implement C Standard library Functions</li>
</ol>

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
    - Array-based implementation
    - Linked-based implementation
    - Abstraction & implementation-related issues
  - Lists
    - Array-based implementation
    - Linked-based implementation
    - Applications
      - Recursion
      - Polish notation
  - Search and analysis of algorithms
  - Analysis of binary search algorithm
  - Trees
  - Binary Search Trees [BST]
  - Binary Heap
  - AVL Tree
  - Letter Tree [Trie]
  - Hash Table
  - Circular Buffer
  - Priority Queue
  - Doubly Linked List

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
- `<stdio.h>`: **Standard Input/Output Library**
  <p>Provides functions for performing input and output operations, such as reading from and writing to files and standard streams.</p>
- `<stdlib.h>`: **Standard Library Functions**
  <p>Contains functions for memory allocation, process control, conversions, and other utility functions.</p>
- `<limits.h>`: **Limits of Integral Types**
  <p>Defines constants that specify the limits of integral data types (e.g., maximum and minimum values).</p>
- `<math.h>`: **Mathematics Library**
  <p>Provides mathematical functions such as trigonometric, exponential, logarithmic, and power functions.</p>
- `<assert.h>`: **Assertions Library**
  <p>Provides a macro to enable runtime assertions that help catch programming errors by validating conditions.</p>
- `<stdbool.h>`: **Boolean Type Support**
  <p>Defines the `bool` type and constants `true` and `false` for better readability in Boolean logic.</p>
- `<string.h>`: **String Handling Library**
  <p>Contains functions for manipulating C strings and arrays, such as copying, concatenation, and comparison.</p>
- `<stddef.h>`: **Standard Definitions**
  <p>Defines common types and macros, including `size_t`, `ptrdiff_t`, and `NULL`.</p>
- `<complex.h>`: **Complex Number Support**
  <p>Provides support for complex number arithmetic, including functions for mathematical operations on complex numbers.</p>
- `<ctype.h>`: **Character Type Handling**
  <p>Defines functions for character classification and conversion, such as checking for alphabetic characters or converting case.</p>
- `<errno.h>`: **Error Number Definitions**
  <p>Provides macros for reporting and retrieving error conditions in library functions.</p>
- `<fenv.h>`: **Floating-Point Environment**
  <p>Defines functions for managing floating-point exceptions and controlling floating-point rounding behavior.</p>
- `<float.h>`: **Floating-Point Limits**
  <p>Defines exact-width integer types and macros for format specifiers, ensuring portability across platforms.</p>
- `<inttypes.h>`: **Integer Types and Macros**
  <p>Defines exact-width integer types and macros for format specifiers, ensuring portability across platforms.</p>
- `<iso646.h>`: **ISO 646 Alternatives Representations**
  <p>Provides alternative representations for certain operators (e.g., `and`, `or`, `not`) for better readability.</p>
- `<locale.h>`: **Localization Support**
  <p>Provides functions and macros for handling locale-specific information, including number formatting and character classification.</p>
- `<setjmp.h>`: **Nolocal Jumps**
  <p>Defines macros for performing nonlocal jumps, allowing the program to jump back to a specific point in the code.</p>
- `<signal.h>`: **Signal Handling**
  <p>Provides mechanisms for handling asynchronous events (signals) that can occur during program execution.</p>
- `<stdalign.h>`: **Standard Alignment**
  <p>Defines macros for specifying the alignment of structures and other types, ensuring proper memory alignment.</p>
- `<stdarg.h>`: **Variable Arguments Handling**
  <p>Defines macros for handling functions with a variable number of arguments.</p>
- `<stdatomic.h>`: **Atomic Operations**
  <p>Provides atomic types and operations for multi-threaded programming, ensuring data consistency without locks.</p>
- `<stdbit.h>`: **Bit Manipulation**
  <p>Provides macros for manipulating individual bits in integers, including set, clear, and toggle operations.</p>
- `<stdint.h>`: **Fixed-width Integer Types**
  <p>Defines fixed-width integer types (e.g., `int32_t`, `uint64_t`) to promote portability across platforms.</p>
- `<stdnoreturn.h>`: **Noreturn Function Specifier**
  <p>Defines the `noreturn` attribute for functions that do not return to the calling function, enhancing code clarity.</p>
- `<tgmath.h>`: **Type-Generic Math**
  <p>Provides type-generic versions of mathematical functions, allowing for automatic type selection based on the argument type</p>
- `<threads.h>`: **Thread Support**
  <p>Provides types and functions for multi-threading, including thread management and synchronization primitives.</p>
- `<time.h>`: **Time and Date Utilities**
  <p>Contains functions for manipulating and formatting time and date, including time measurement.</p>
- `<uchar.h>`: **Unicode Character Handling**
  <p>Provides functions and types for handling Unicode characters and strings.</p>
- `<wchar.h>`: **Wide Character Support**
  <p>Provides functions for handling wide characters and strings, useful for internationalization.</p>
- `<wctype.h>`: **Wide Character Type Handling**
  <p>Defines functions for character classification and case conversion for wide characters.</p>
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
