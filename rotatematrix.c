#include <stdio.h>
#define M 3
#define N 3
void displayMatrix(int matrix[][M])
{
    for (int i = 0; i < N; i++)
    {
         printf("\n");
        for (int j = 0; j < M; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
    int matrix[N][M];
    printf("Enter the matrix elements");
    for(int i = 0 ; i < M ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
           scanf("%d",&matrix[i][j]);
        }}
    printf("The given matrix is");
    displayMatrix(matrix);
    int temp[M];
    int k;
    printf( "Number of rotations : ");
    scanf("%d",&k);
    k = k % M;
    for (int i = 0; i < N; i++)
    {
        for (int t = 0; t < M - k; t++)
        {
            temp[t] = matrix[i][t];
        }
        for (int j = M - k; j < M; j++)
        {
            matrix[i][j - M + k] = matrix[i][j];
        }
        for (int j = k; j < M; j++)
        {
            matrix[i][j] = temp[j - k];
        }
        
    }
    printf("\nThe rotated matrix is\n");
    displayMatrix(matrix);
    return 0;
}
