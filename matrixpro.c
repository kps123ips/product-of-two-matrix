#include<stdio.h>
#include<conio.h>
int main()
{
	int A[3][3],B[3][3],C[3][3],i,j,k;
	printf("Enter nine elements for first matrix");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	scanf("%d",&A[i][j]);
	printf("Enter nine elements for second matrix");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	scanf("%d",&B[i][j]);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			C[i][j]=0;
			for(k=0;k<=2;k++)
			{
			C[i][j]+=A[i][k]*B[k][j];
		    }
	    }
	}
	printf("\n Matrix A value\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d ",A[i][j] );
		}
		printf("\n");
	}
	printf("\n Matrix Value of B\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\nValues of MAtrix C\n ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d  ",C[i][j]);
		}
		printf("\n");
	}
	getch();
	
}
