#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], add[2][2], i, j;
    printf("Enter the values of first matrix:"); // input first matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of second matrix:"); // input second matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The matrix addition is:\n"); // adding first and second matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", add[i][j]); // print the added matrix
        }
        printf("\n");
    }
}