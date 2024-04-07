#include <stdio.h>
int max,arr[20],num;
int binarysearch(int num);
void main()
{
	// Taking the array
	int i,j,temp,result;
	printf("Enter number of elements in array: ");
	scanf("%d",&max);
	for (i=0;i<max;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&arr[i]);
	}
	
	// Sorting the array
	for (i=0;i<max;i++)
	{
		for (j=i+1;j<max;j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Enter the number you want to search: ");
	scanf("%d",&num);
	result = binarysearch(num);
	if (result != -1)
		printf("The element is in %d index",result);
	else
		printf("Element not found");
}
	
// Binary search
int binarysearch(num)
{

	int start = 0, end = max-1, mid,p=0;

	while (start<=end)
	{
		mid = (start+end)/2;
		if (arr[mid] == num)
			return mid;
		else if (arr[mid] < num)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
	
}
