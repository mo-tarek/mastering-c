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
