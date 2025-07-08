#include <stdio.h>
#include <string.h>

struct Address
{
  char HouseNO[25];
  char City[20];
  char PinCode[25];
};

void main()
{
  struct Address A[2];
  int i;
  for (i = 0; i < 2; i++)
  {
    printf("Enter House No: ");
    scanf("%s", A[i].HouseNO);
    printf("Enter City: ");
    scanf("%s", A[i].City);
    printf("Enter Pin Code: ");
    scanf("%s", A[i].PinCode);
  }

  printf("\n\n");
  for (i = 0; i < 2; i++)
  {
    printf("House No:%d %s\n", i, A[i].HouseNO);
    printf("City: %s\n", A[i].City);
    printf("Pin Code: %s\n", A[i].PinCode);
    printf("\n");
  }
}