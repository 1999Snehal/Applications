#include<stdio.h>

int Factorial(int iValue)
{
    int iFact = 1;
   int iNo = 0;

for(iNo = 1; iNo <= iValue; iNo++)
{
 iFact = iFact * iNo;
}
return iFact;

}
 
 int main()
 {
    int iRet = 0;
    int iValue = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet =Factorial(iValue);
    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
 }