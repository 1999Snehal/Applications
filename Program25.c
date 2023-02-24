#include<stdio.h>

int Sumation(int iValue)
{
    int iSum = 0;
   int iNo = 0;

for(iNo = 1; iNo <= iValue; iNo++)
{
 iSum = iSum + iNo;
}
return iSum;

}
 
 int main()
 {
    int iRet = 0;
    int iValue = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = Sumation(iValue);
    printf("Sumation is : %d\n",iRet);
    

    return 0;
 }