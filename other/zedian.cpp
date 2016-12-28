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
	for(i=1;i<n-1;i++)
	{
		if( a[i]>a[i-1] && a[i]>a[i+1] || a[i]<a[i-1]&&a[i]<a[i+1] )
		{
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
