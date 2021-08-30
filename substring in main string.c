#include<stdio.h>
#include<string.h>
void search(char str1[],char str2[])
{
    int i,count=0,count2=0,j;
    for(i=0;str1[i];i++)
    {
    j=0;
    while(str2[j-1])
    {
        if(str1[i]==str2[j])
        {   
            i++;
            
            j++;
            
            count++;
            
        }
       
        count2++;
         if(str1[i]!=str2[j])
           break;
       
    }
   
    }
    if(count==count2)
    {
        printf("match found");
    
    }
    else
    {
        printf("match not found");
    }
}


int main()
{
int k,l;
char str1[100],str2[100];
printf("enter the string");
scanf("%s", str1);
printf("enter substring");
scanf("%s", str2);
search(str1,str2);
return 0;
}
