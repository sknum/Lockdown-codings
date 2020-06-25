#include<stdio.h>
const int M = 3; 
const int N = 3; 
void swap(int a, int b) 
{ 
    int temp = a; 
    a = b; 
    b = temp; 
} 
void reverseArray(int arr[M][N]) 
{     
    for (int i = 0; i < M; i++) { 
        int start = 0; 
        int end = N - 1; 
        while (start < end) { 
            swap(arr[i][start], 
                 arr[i][end]); 
            start++; 
            end--; 
        } 
    }
    for (int i = 0; i < M; i++) { 
        for (int j = 0; j < N; j++) { 
            printf("%d\t", arr[i][j]); 
        } 
        printf("\n");
    } 
} 
int main() 
{ 
    int arr[3][3] = { { 1, 2, 3 }, 
                     { 4, 5, 6 }, 
                     { 7, 8, 9 } }; 
    reverseArray(arr); 
    return 0; 
} 
