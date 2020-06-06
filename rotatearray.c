#include <stdio.h> 
void rotatebyOne(int arr[], int n); 
void rotate(int arr[], int d, int n) 
{ 
    int i; 
    for (i = 0; i < d; i++) 
        rotatebyOne(arr, n); 
} 
void rotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[i] = temp; 
} 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
} 
int main() 
{ 
    int arr[20],n,pos,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position");
    scanf("%d",&pos);
    rotate(arr, pos, n); 
    printArray(arr, n); 
    return 0; 
} 
