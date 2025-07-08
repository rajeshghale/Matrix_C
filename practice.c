#include <stdio.h>

int mulply(int x, int y);

int main()
{

  int a, b;
  printf("Enter 2 numbers:");
  scanf("%d%d", &a, &b);
  mulply(a, b);

  return 0;
}

int mulply(int x, int y)
{
  int mul;
  mul = x * y;
  printf("%d", mul);
}