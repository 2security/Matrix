#include<stdio.h>
int main()
	{
	int mat1[20][20],i,j,n,sumr=0,sumc=0;
	
	printf("\nEnter the order of matrix");
	scanf("%d",&n);		
	
	printf("\n Enter matrix:: \n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&mat1[i][j]);
		
	for(i=0;i<n;i++)
		{
		sumr=0;
		sumc=0;
		for(j=0;j<n;j++)
			{
			sumr=sumr+mat1[i][j];
			sumc=sumc+mat1[j][i];
			}
		printf("\n Sum of row %d=%d",i+1,sumr);
		printf("\n Sum of column %d=%d",i+1,sumc);
		}
	return 0;
	}
