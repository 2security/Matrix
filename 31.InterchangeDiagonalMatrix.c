#include<stdio.h>
int main()
	{
	int mat1[20][20],i,j,n,temp;
	
	printf("\nEnter the order of matrix");
	scanf("%d",&n);		
	
	printf("\n Enter matrix:: \n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&mat1[i][j]);
		
	for(i=0;i<n;i++)
		{
		temp=mat1[i][i];
		mat1[i][i]=mat1[i][n-i-1];
		mat1[i][n-i-1]=temp;
		}
	printf("\n Interchange diagonals of the matrix: \n");
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	
				printf("%d ",mat1[i][j]);
			printf("\n");
		}

	return 0;
	}
