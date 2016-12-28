#include<stdio.h>
int main()
{
	int n,i,j,k,max,sum=0;
	int a[100][1000]={0};
	int b[100]={0};
	printf("请输入数塔的层数");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	} 
	
	while(n)
	{
		
	}
	for(i=0;i<n;i++)
	{
		sum+=b[i];
	}
	printf("%d\n",sum);
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
