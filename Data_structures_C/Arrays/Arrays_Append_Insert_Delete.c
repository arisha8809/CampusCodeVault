#include <stdio.h>
void main()
{
	int num,max,n,i,position,number,j,temp,del;
	int a[100];
	printf("Enter number of elements you want to add in the array: ");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a[i]);
	}
	
	// append in array
	printf("Enter number of elements you want to append in the array: ");
	scanf("%d",&num);
	for (i=0;i<num;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a[n+i]);
	}
	int total = n + num;
	for (i=0; i<total; i++)
		printf("%d\n",a[i]);
	
	
	// insert in array
	printf("Enter the position you want to insert: ");
	scanf("%d",&position);
	printf("Enter the value which you want to add: ");
	scanf("%d",&number);
	i = total;
	while (i>=position)
	{
		a[i+1] = a[i];
		i-=1;
	}
	a[position] = number;
	
	for (i=0; i<total+1; i++)
		printf("%d\n",a[i]);	


	// delete in array
	printf("Enter the position in which you want to delete the element: ");
	scanf("%d",&del);
	for (i=del;i<total;i++)
	{
		a[i] = a[i+1];
	}
	for (i=0; i<total; i++)
		printf("%d\n",a[i]);
	
}



