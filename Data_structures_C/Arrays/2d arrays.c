#include <stdio.h>

void main()

{
	int m,n;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter number of columns: ");
	scanf("%d",&n);

	int i,j ,a[m][n], b[m][n], c[m][n];
	
	
	printf("Enter numbers for 1st matrix: \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Enter a number: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter numbers for 2nd matrix: \n"); 
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Enter a number: ");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("THE SUM OF TWO MATRICES IS: \n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

}
