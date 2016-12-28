#include<stdio.h>
int main()
{
	int m,n,i,j;
	int a[30][30]={0};
	int b[30][30]={0};
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
		for(j=1;j<n-1;j++)
		{
			if( a[i][j] == a[i][j-1] && a[i][j] == a[i][j+1] )
			{
				b[i][j-1]=1;
				b[i][j]=1;
				b[i][j+1]=1;
			}
		}
	}	
	for(j=0;j<n;j++)
	{
		for(i=1;i<m-1;i++)
		{
			if( a[i][j] == a[i-1][j] && a[i][j] == a[i+1][j] )
			{
				b[i-1][j]=1;
				b[i][j]=1;
				b[i+1][j]=1;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j] == 1)
			{
				a[i][j]=0; 
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
