#include<stdio.h>

void DispayTable(int iNo)
{
    int iCnt = 0;
     printf("_______________\n");
    printf("Table of %d is : \n",iNo);
    printf("\n");
for(iCnt = 1; iCnt <= 10; iCnt++)
{
   printf("%d\n", iNo * iCnt);
}
  printf("_______________\n");
}
int main()
{
  int iValue = 0;

  printf("Enter the number\n");
  scanf("%d",&iValue);

   DispayTable(iValue);

    return 0;
}