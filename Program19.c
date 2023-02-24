#include<stdio.h>

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
      printf("%d\n",i);
      
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the Iteration");
    scanf("%d",iNo);

    Display(iNo);
    return 0;
}