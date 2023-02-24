#include<stdio.h>

int SumFactors(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   
   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
     if((iSum % iCnt) == iSum)
     {
        iSum = iSum + iCnt;
     }
   }
   return iSum;
}

int main()
{
   int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

   iRet = SumFactors(iValue);
   printf("Sumation of Factors : %d\n",iRet);

    return 0;
}