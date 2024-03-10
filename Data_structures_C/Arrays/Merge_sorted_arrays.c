#include <stdio.h>
void main()
{
	// Taking the two sorted arrays from the user
	int max1,max2,i,j,k;
	printf("Enter number of elements in first array: ");
	scanf("%d",&max1);
	printf("Enter number of elements in second array: ");
	scanf("%d",&max2);
	int array1[20], array2[20];
	printf("Enter numbers for first array: \n");
	for (i=0;i<max1;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&array1[i]);
	}
	printf("Enter numbers for second array: \n");
	for (i=0;i<max2;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&array2[i]);
	}
	
	//Sorting the arrays
	int total = max1 + max2;
	int array3[total];
	if (array1[0]>array1[1])    // Check if array is in ascending or descending order
	{
		for(i=0,j=0,k=0;k<total;k++)
		{
			if (array1[i]>array2[j])
				array3[k] = array1[i++];
			else
				array3[k] = array2[j++];
		}
	}
	else
	{
		for(i=0,j=0,k=0;k<total;k++)
		{
			if (array1[i]<array2[j])
				array3[k] = array1[i++];
			else
				array3[k] = array2[j++];
		}	
	}
	
	// Printing the array
	for(i=0;i<total;i++)
		printf("%d\n",array3[i]);
	
}
