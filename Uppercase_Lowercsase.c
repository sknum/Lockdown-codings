#include<stdio.h>
int main()
{
    char s[100];
    int i;
    int countL,countU,countS,countN;
    printf("Enter any string: ");
    scanf("%s",s);
    countL=countU=countS=countN=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            if((s[i]>='A'&&s[i]<='Z'))
            {
                countU++;
            }
            else
            {
                countL++;
            }
        }
        else if((s[i]>='0'&&s[i]<='9'))
        {
            countN++;
        }
        else
        {
            countS++;
        }
    }
    printf("Uppercase letters : [ %d ]\n",countU);
    printf("Loweecase letters : [ %d ]\n",countL);
    printf("Numbers: [ %d ]\n",countN);
    printf("Special characters: [ %d ]\n",countS);
 
    return 0;
}
