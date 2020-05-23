#include <stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,num=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(num==n)
        {
            exit(0);
        }
        else
        {
            num=num+i;
            printf("%d\t",num);
        }
    }
}
© 2020 GitHub, Inc.
