#include<stdio.h>
int nthMagicNo(int n) 
{ 
    int pow = 1, answer = 0; 
    while (n) 
    { 
       pow = pow*5; 
         if (n& 1)
         {
             answer += pow;
         }
    
       n >>= 1;
    
    } 
    return answer; 
} 
 
int main() 
{   
    
    int n;
    printf("input:");
    scanf("%d",&n);
    printf("output:");
    for(int i=1;i<=n;i++)
{
    printf(" %d", nthMagicNo(i)); 
    
}
    return 0; 
} 
