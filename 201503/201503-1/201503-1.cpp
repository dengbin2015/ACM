#include<stdio.h>
#define N 1000
int main()
{
	int m,n,i,j;
	int a[N][N]={0};
	int b[N][N]={0};
	
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			b[n-j-1][i]=a[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
