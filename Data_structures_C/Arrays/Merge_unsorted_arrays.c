#include <stdio.h>
void main()
{
	// Taking the two unsorted arrays from the user
	int max1,max2,i,j;
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
	
	// Merging the two arrays together
	int total = max1+max2;
	for (i=max1;i<total;i++)
		array1[i] = array2[i-max1];
	
	// sorting the array
	int temp;
	for (i=0;i<total;i++)
	{
		for (j = i+1; j<total;j++)
		{
			if (array1[i] > array1[j])
			{
				temp = array1[i];
				array1[i] = array1[j];
				array1[j] = temp;
			}
		}
	}
	
	// Printing the array
	for(i=0;i<total;i++)
		printf("%d\n",array1[i]);
	
}




