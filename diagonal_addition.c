#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    int sum = 0;

    printf("Enter the matrix to add the diogonal elements: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); // Taking input for the matrix
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]); // Printing the matrix
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        sum += a[i][i]; // Adding the diagonal elements;
    }

    printf("The sum of the diagonal elements is: %d\n", sum); // Printing the sum of the diagonal elements
    return 0;
}