#include<stdio.h>

int Sumation()
{
    int iSum = 0;
   int iNo = 0;

for(iNo = 0; iNo <= 5; iNo++)
{
 iSum = iSum + iNo;
}
return iSum;

}
 
 int main()
 {
    int iRet = 0;
    iRet = Sumation();
    printf("Sumation is : %d\n",iRet);

    return 0;
 }