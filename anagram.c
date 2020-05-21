#include<stdio.h>
#include<string.h>
void sort(char str[]);
int main()
{
	char str1[10];
	char str2[10];
	printf("Enter the String 1");
	scanf("%s",str1);
	printf("Enter the String 2");
	scanf("%s",str2);
	sort(str1);
	sort(str2);
	if( strcmp(str1, str2) == 0 )
		printf("The strings are anagrams \n");
	else
		printf("The strings are NOT anagrams \n");
	
	return 0;
}
void sort(char str[]){
	
	int i,j,temp;
	int len = strlen(str);
	for(i=0; i<len; i++)
		for(j=0; j< len; j++)
			if( str[i] < str[j]){
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}	
}
