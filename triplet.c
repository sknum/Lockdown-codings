#include<stdio.h>
void triplet(int arr[],int n);
int n,i,j,k,count=0;
int arr[10],temp[10];
void triplet(int arr[],int n)
{
    
	for(i=n-1;i>0;i--)
	{
	    j=0;
	    k=i-1;
	    while(j<k)
	    {
	        if(arr[i]==arr[j]+arr[k])
	        {
	            count++;
	            break;
	        }
	        else
	        if(arr[i]>arr[j]+arr[k])
	            j=j+1;
	       else
	            k=-1;
	    }
	}
	if(count>0)
	{
	    printf("%d",count);
	}
	else
	    printf("-1");
}
int main()
{
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp[i]=arr[i];
				arr[i]=arr[j];
				arr[j]=temp[i];
			}
		}
	}
	triplet(arr,n);
	return;
}
