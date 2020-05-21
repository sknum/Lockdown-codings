#include <stdio.h>
#include <string.h>
int check_subsequence (char [], char[]);
int m,n;
int main () 
{
  int flag;
  char s1[1000], s2[1000];
  printf("Input first string\n");
  gets(s1);
  printf("Input second string\n");
  gets(s2);
  m=strlen(s1);
  n=strlen(s2);
  if (m <n )
    flag = check_subsequence(s1, s2);
  else
    flag = check_subsequence(s2, s1);

  if (flag==1)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}

int check_subsequence (char a[], char b[]) {
  int c, d;

  c = d = 0;

  while (a[c] != '\0') {
    while ((a[c] != b[d]) && b[d] != '\0') {
      d++;
    }
    if (b[d] == '\0')
      break;
    d++;
    c++;
  }
  if (a[c] == '\0')
    return 1;
  else
    return 0;
}
