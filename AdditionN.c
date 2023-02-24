#include<stdio.h>     // For printf and scanf
#include<stdlib.h>    // Fof malloc and free
////////////////////////////////////////////////
//
// Application Name : Addition of N Numbers
// Input            : N number
// Output           : Addition
// Author           : Snehal Lagad
// Date             : 18 September 2022
//
//////////////////////////////////////////////////
int main()
{
	int *Arr = NULL;   // Pointer to hoid the address of array
	int iSize = 0;    // Variable to hold size of Array
	int i = 0;	     // Loop counter
	int iSum = 0;   // To hold addition
	
	printf("Enter how many elements you want?\n");
	scanf("%d",&iSize);
	
	// Allocate the memory
	Arr = (int *)malloc(iSize * sizeof(int));
	printf("Memory allocation is succesful\n");
	
	printf("Enter the elements\n");
	
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}
	// Perform Addition
	for(i = 0; i < iSize; i++)
	{
		iSum = iSum + Arr[i];
	}
	
	printf("Addition is : %d\n",iSum);
	
	free(Arr);
	printf("Memory gets deallocated.\n");
	
	return 0;
}	
