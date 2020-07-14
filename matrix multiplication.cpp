#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int A[5][5],B[5][5];
int main()
{
	int a,b,x,y,C[5][5],i,j,k, sum=0;
	printf("\nEnter size of both the matrix");
	scanf("%d %d %d %d",&a,&b,&x,&y);
	printf("\nMATRIX A");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nMATRIX B");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("\nMatrix A:\n");
	for(i=0;i<a;i++)
    {
	for(j=0;j<b;j++)
	{
		printf("%d  ",A[i][j]);
	}
	printf("\n");
    }
    printf("\nMatrix B:\n");
	for(i=0;i<x;i++)
    {
	for(j=0;j<y;j++)
	{
		printf("%d  ",B[i][j]);
	}
	printf("\n");
    }
    if(b==x)
    {
	for(i=0;i<a;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<b;k++)
			{
				sum+= A[i][k] * B[k][j];
			}
			C[i][j]=sum;
			sum=0;
		}
	}
   }
   else
   {
	printf("\nMultiplication not possible");
	return 0;
   }
   printf("\nMatrix after multiplication: \n");
   for(i=0;i<a;i++)
   {
	for(j=0;j<y;j++)
	{
		printf("%d  ",C[i][j]);
	}
	printf("\n");
   }
   return 0;
}
