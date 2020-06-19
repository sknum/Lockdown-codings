#include<stdio.h>
#include<stdlib.h>
#define N 3
int b[N][N];
void print_matrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d\t", mat[i][j]);

        printf("\n");
    }
    printf("\n");
}
void transpose(int arr[N][N])
{
    for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
                b[i][j]=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=b[i][j];
            }
    }
}
void reverse_rows(int arr[N][N])
{
    int k;
    for (int i = 0; i < N; i++)
    {
        k = N-1;
        for (int j = 0; j < k; j++)
        {
            b[i][j]=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=b[i][j];
            k--;
        }}}
void reverse_column(int arr[N][N])
{
    int k;
    for (int i = 0; i < N; i++)
    {
        k = N-1;
        for (int j = 0; j < k; j++)
        {
            b[i][j]=arr[j][i];
            arr[j][i]=arr[k][i];
            arr[k][i]=b[i][j];
            k--;
        }}}

int main()
{
    int mat[N][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ch;
    while(1)
    {
    printf("1.The matrix before rotation\n");
    printf("2.The matrix after rotation - Clockwise\n");
    printf("3.The matrix after rotation - antiClockwise\n");
    printf("4.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: print_matrix(mat);
                transpose(mat);
                break;
    
       case  2:  reverse_rows(mat);
                 print_matrix(mat);
                 break;
    
       case  3:  reverse_column(mat);
                 print_matrix(mat);
                 break;
                 
       case  4:exit(0);
               break;
    
}
}
return 0;
}
