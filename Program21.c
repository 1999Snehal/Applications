#include<stdio.h>

void Display(int iValue)
{
    int i = 1;
    while(i <= iValue)
    {
      printf("Snehal : %d\n",i);
      i++;
      
    }
}

int main()
{
    int iNo = 0;

   printf("Enter the Iteration");
   scanf("%d",&iNo);

    Display(iNo);
    return 0;
}