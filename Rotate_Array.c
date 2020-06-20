#include<stdio.h>
int main()
{
    int no_of_elements, no_of_rotations, no_to_display;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&no_of_elements);
    printf("Enter the number of rotations of the array : ");
    scanf("%d",&no_of_rotations);
    printf("Enter the number of indexes to be displayed : ");
    scanf("%d",&no_to_display);
    int arr[no_of_elements];
    printf("\n Input the array elements\n");
    for(int i = 0; i < no_of_elements; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array Elements are\n");

    for(int i = 0; i < no_of_elements; i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    no_of_rotations %= no_of_elements; 
    for(int i = 0; i < no_to_display; i++)
    {
        int index;
        printf("\nEnter the index of the array to be displayed : ");
        scanf("%d",&index);
        printf("\nThe element in the array is ");
        printf("%d",arr[(no_of_elements + index - no_of_rotations) % no_of_elements]); 
    }
    return 0;
}
