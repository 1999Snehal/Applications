#include<stdio.h>

void Display(int iValue)
{
  register int i = 0;

    i = 1;
   while(i <= iValue)
   {
    printf("Jay Ganesh...\n");
    i++;
   }

}
int main()
{
    int iNo = 0;
    printf("Enter the number of iteration : \n");
    scanf("%d",&iNo);

   Display(iNo);

    return 0;
}