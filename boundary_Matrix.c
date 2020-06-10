#include<stdio.h>
void main()
{
    int m,n,i,j,sum=0;
    int mat[20][20];
    printf("Enter the size of matix i.e m and n value\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The boundary elements are");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                printf("%d\t",mat[i][j]);
                sum=sum+mat[i][j];
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    printf("The sum of Boundary elements of the matrix is:%d",sum);
}
