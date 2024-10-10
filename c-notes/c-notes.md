# C programming notes
This notes is incremental. That's,  I will add all my notes from all courses here.

--- 
### My Approach
- Learn the core language
- Learn the standard library
---
### Professional C Programming Workflow
- Planning and requirements gathering
  - **Define Objectives:** Understand the problem you're solving 
  - **Gather Requirements:** Document specifications and constraints
  - **Design:** Create system architecture, data flow diagrams, and module designs
- Environment Setup
  - **Choose Development Tools:** Select an IDE or a text editor (e.g., Visual Studio, Code::Blocks, or Vim)
  - **Version Control System:** 
  - **Build System:** Setup Makefile or CMake for building projects
- Coding
  - **Follow Coding Standards:** Use consistent style Guides (e.g., Google C++ Style Guide)
  - **Modular Programming:** Break down code into functions and modules for readability and reuse 
  - **Comments and Documentation:** Document code adequately for future reference
- Testing
  - **Unit Testing:** Write tests for individual functions (consider frameworks like CUnit or Check)
  - **Integration Testing:** Test how different modules work together
  - **Contious Testing:** Setup CI/CD pipelines to automate builds and tests
- Debugging
  - **Use Debuggers:** Utilize tools like GDB for stepping through code and inspecting variables
  - **Logging:** Implement logging to track the flow of execution and errors
- Code Review
  - **Peer Review:** Have colleagues review code changes for quality and adherence to standards
  - **Tools:** Use platforms like Github or Gitlab for pull requests and comments
- Documentation
  - **API Documentation:** Use tools like Doxygen to generate documentation from comments
  - **User Guides:** Create manuals or README files for end-users
- Deployment
  - **Build and Package:** Compile the code and create binaries or libraries 
  - **Deployment Strategy:** Decide how to release (e.g., Installers, Docker containers)
- Maintainance
  - **Monitor Performance:** Track the application for issues post-deployment
  - **Bug Fixes and Updates:** Regularly update code based on user feedback and new requirements 
- Refactoring
  - **Improvement:** Periodically refactor code for performance and readability 
  - **Technical Debt:** Address any accumulated technical debt
- Learning and Iteration
  - **Feedback Loop:** Incorporate user feedback and iterate on features
  - **Continous Learning:** Stay updated on new C standards and practices
- Best Practices
  - **Write Testable Code:** Design code to be easily testable
  - **Error Handling:** Implement robust error handling and resource management (e.g., using errno)
  - **Memory Management:** Use tools like Valgrind to detect memory leaks
  - **Modularization:** Keep related functionalities together for easier maintainance

By following this workflow, you can enhance productivity, code quality, and collaboration within your teams.

---
### Table of Contents
- Introduction
- History
- Hello, World
- Types 
- Variables 
- Branching 
- Switch statements 
- Looping 
- Functions 
- Array basics 
- Dynamically allocated arrays 
- Strings 
- Pointers 
- Structures (C objects)
- Command line arguments 
- Files 
- Function pointers 
- Makefiles (and a little on multi-file projects)
- Libraries

## Command line arguments 
When your program deal with some external inputs from the command line to operate on

main function signature:
```
int main(int argc, char **argv);
```



## Bit Manipulation Techniques 
- Bit Manipulation are powerful technique in C programming, especially for: 
    - Systems Programming 
    - Embedded Systems 
    - Performance-critical Applications
1. Basic Bit Operations 
- AND (`&`): Used to clear bits.
```
int x = 0b1100; // 12
int y = x & 0b1010; // 0b1000 (8)
```
- OR (`|`): Used to set bits.
```
int x = 0b1100; // 12
int y = x | 0b0010; // 0b1100 (12)
```
- XOR (`^`): Used to toggle bits.
```
int x = 0b1100; 12 
int y = x ^ 0b1010; // 0b0110 (6)
```
- NOT (`~`): Used to invert bits.
```
int x = 0b1100; // 12
int y = ~x; 0b0011 (3)
```
2. Shifting Bits 
- Left Shift (`<<`): Shifts bits to the left (multiplies by 2).
```
int x = 1; // 0b0001
int y = x << 3; // 0b1000 (8)
```
- Right Shift (`>>`): Shifts bits to the right (divides by 2).
```
int x = 8; // 0b1000
int y = x >> 2; // 0b0010 (2)
```
3. Setting, Clearing, and Toggling Bits
- Set a Bit: 
```
int x = 0b000; 
int pos = 2; // position to set (0-indexed)
x |= (1 << pos); // x = 0b0100
```
- Clear a Bit: 
```
int x = 0b1111;
int pos = 2; // position to clear
x &= ~(1 << pos); // x = 0b1011
```
- Toggle a Bit: 
```
int x = 0b1100;
int pos = 1; // position to toggle 
x ^= (1 << pos); // x = 0b1110
```
4. Checking Bits 
- Check if a Bit is Set:
```
int x = 0b1100; 
int pos = 2; // position to check 
if(x & (1 << pos)){
    // Bit is set
}
```
5. Counting Bits
- Count Set Bits (Hamming Weight):
```
int countSetBits(int x){
    int count = 0; 
    while(x){
        count += x & 1; // Check the least significant bit
        x >>= 1; // Right Shift
    }
    return count;
}
```
6. Swapping Bits 
- Swap Two Bits 
```
int swapBits(int x, int pos1, int pos2){
    // Check if the bits at pos1 and pos2 are different
    if(((x >> pos1) & 1) != ((x >> pos2) & 1)){
        // Toggle the bits at pos1 and pos2
        x ^= (1 << pos1) | (1 << pos2);
    }
    return x;
}
```
7. Other Techniques
- Setting Multiple Bits: 
```
int setBits(int x, int mast){
    return x | mask; // Sets bits as per the mask
}
```
- Clearing Multiple Bits:
```
int clearBits(int x, int mask){
    return x & ~mask; // Clears bits as per the mask
}
```
