#include<stdio.h>
void floyds(int D[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
	{
		printf("With %d as Intermediate vertex, Cost matrix now:\n",k);

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(i==j)
				D[i][j]=0;
				else
					D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
				printM(D,n);
	}
}

int min(int a, int b)
{
	return (a<b?a:b); 
}

printM(int D[10][10],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",D[i][j]);
		}
		printf("\n");

	}
}


void main()
{
	int D[10][10],n,i,j;
	printf("Enter the number of vertices:");
	scanf("%d",&n);

	printf("Enter the cost matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&D[i][j]);

	}

	printf("The initail cost matrix is:\n");
	printM(D,n);
	floyds(D,n);

}