#include <stdio.h>
int countSetBitsUtil(int x); 
int countSetBits(int n) 
{ 
    int bitCount = 0;
    for (int i = 1; i <= n; i++) 
        bitCount += countSetBitsUtil(i); 
    return bitCount;
}
int countSetBitsUtil(int x) 
{ 
    if (x <= 0) 
        return 0; 
    return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2); 
} 
int main() 
{ 
    int n = 6; 
    printf("Total set bit count is %d", countSetBits(n)); 
    return 0; 
} 
