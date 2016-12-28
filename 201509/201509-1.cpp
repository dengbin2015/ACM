#include<stdio.h>
int main()
{
	int n,i,num=0;
	int a[1000]={0};
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if( a[i] == a[i+1] )
		{
			continue;
		}
		else
		{
			num++;
		}
	}
	
	printf("%d",num);
	
	return 0;
}
