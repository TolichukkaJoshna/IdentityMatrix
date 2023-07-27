/*identity matrix*/
#include<stdio.h>
main()
{
	int a[5][5],i,j,n,count=0;
	printf("enter no of rows,columns..:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter element at a[%d][%d]..:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\ngiven matrix is..:");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			if(i==j && a[i][j] || i!=j && a[i][j]==0)
			count++;
		}
		printf("\n");
	}
	if(count==n*n)
	{
		printf("\n\n IDENTITY MATRIX");
	}
	else
	{
		printf("\n\n NOT AN IDENTITY MATRIX ");
	}


	
	
}
