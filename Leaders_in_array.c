#include<stdio.h>
void leader(int arr[], int size)
{
     for (int i = 0; i < size; i++) 
    { 
        int j; 
        for (j = i+1; j < size; j++) 
        { 
            if (arr[i] <= arr[j]) 
                break; 
        }     
        if (j == size) 
            printf("%d",arr[i]); 
  } 
}
void main() 
{ 
    int n1,i;
    printf("enter the array size");
    scanf("%d",&n1);
    int arr[n1];
    printf("Enter the array elements");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    leader(arr, n); 
} 
