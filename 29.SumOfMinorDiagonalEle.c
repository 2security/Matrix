#include<stdio.h>
int main()
	{
	int mat1[20][20],i,j,n,sum=0;
	
	printf("\nEnter the order of matrix");
	scanf("%d",&n);		
	
	printf("\n Enter matrix:: \n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&mat1[i][j]);
		
	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			{
				if(i+j==n-1)
					sum=sum+mat1[i][j];
			}
		}
		
	printf("Sum of minor diagonal elements is: %d",sum);
	return 0;
	}
