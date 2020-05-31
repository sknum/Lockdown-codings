#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20];
    int p,q,r,s,t,u,v;
    int m,n,i,j;
    printf("Enter the size of the Matrix \n");
    scanf("%d",&m);
    printf("Enter the Elements of first matrix\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the Elements of Second matrix\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    p=(a[1][1]+a[2][2])*(b[1][1]+b[2][2]);
    q=(a[2][1]+a[2][2])*b[1][1];
    r=a[1][1]*(b[1][2]-b[2][2]);
    s=a[2][2]*(b[2][1]-b[1][1]);
    t=(a[1][1]+a[1][2])*b[2][2];
    u=(a[2][1]-a[1][1])*(b[1][1]+b[1][2]);
    v=(a[1][2]-a[2][2])*(b[2][1]+b[2][2]);
    c[1][1]=p+s-t+v;
    c[1][2]=r+t;
    c[2][1]=q+s;
    c[2][2]=p+r-q+u;
    printf("The required strassens multiplication is\n");
    for(i=1;i<=m;i++)
    {
        printf("\n");
        for(j=1;j<=m;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }    
}
