# Modular Arithmetic

### (a + b) mod *m* = (a mod *m* + b mod *m*) mod *m*

### (a - b) mod *m* = (a mod *m* - b mod *m*) mod *m*

### (a x b) mod *m* = (a mod *m* x b mod *m*) mod *m*

Usually we want the remainder to always be between 0...*m*-1. However, in C++ and other languages, the remainder of a negative number is either zero or negative. An easy way to make sure there are no negative remainders is to first calculate the remainder as usual and then add *m* if the result is negative:

```cpp
x = x % m;
if(x < 0)
    x += m;