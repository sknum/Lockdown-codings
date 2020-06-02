#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
	int inv_count = 0; 
	for (int i = 0; i < n - 1; i++) 
		for (int j = i + 1; j < n; j++) 
			if (arr[i] > arr[j]) 
				inv_count++; 

	return inv_count; 
} 
int main(int argv, char** args) 
{ 
	int n1,i;
	printf("Enter the array size");
	scanf("%d",&n1);
	int arr[n1]; 
	printf("Enter the array elements");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr[i]);
	}
	int n = sizeof(arr) / sizeof(arr[0]); 
	printf(" Number of inversions are %d \n", getInvCount(arr, n)); 
	return 0; 
} 
