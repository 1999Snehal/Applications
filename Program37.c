#include<stdio.h>

int SumNonFactor(int iNo)
{
   int iCnt = 0, iSum = 0;
   
   for(iCnt = 1; iCnt < iNo; iCnt++)
   {
    if((iNo % iCnt) != 0)
    {
        iSum = iSum + iCnt;
    }
   }
    return iSum;
   
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter the number\n");
  scanf("%d",&iValue);

  iRet = SumNonFactor(iValue);
  printf("Sumation of non Factor are %d\n",iRet);
    return 0;
}