#include <stdio.h>
int main()
{
  int a[3][3], i, j, out;
  int sum = 0;

  printf("Enter the matrix :\n");
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
    for (j = 0; j < 3; j++)
    {
      if (i == j || i + j == 2)
      {
        sum = sum + a[i][j];
      }
    }
  }

  printf("The sum of the diagonal elements is: %d\n", sum); // Printing the sum of the diagonal elements

  return 0;
}