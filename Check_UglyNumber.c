#include <stdio.h>

int main()
{
    int n,count=0;
    printf("Enter the number greater than 0\n");
    scanf("%d",&n);
    if(n>1)
    {
        if(n%5==0)
        {
            n=n/5;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            printf("The given number is not ugly");
            count=1;
        }
        if(count==0)
        {
            printf("The given number is ugly");
        }
    }
}
