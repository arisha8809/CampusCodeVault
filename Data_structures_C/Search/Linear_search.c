#include <stdio.h>
int max,i,num;
int search(int num);
int arr[20];
int j = 0;

void main()
{
	printf("Enter number of elements in first array: ");
	scanf("%d",&max);
	for (i=0;i<max;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&arr[i]);
	}
	printf("Enter number you want to search: ");
	scanf("%d",&num);
	int result = search(num);
	if (j==1)
		printf("The number is in the array in %d index",result);
	
}

int search(int num)
{
	
	for(i=0;i<max;i++)
	{
		if (arr[i]==num)
		{
			j=1;
			return i;
			break;
		}
	}
	if (j == 0)
		printf("Element not found in array\n");
		
}

