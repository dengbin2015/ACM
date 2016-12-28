#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int i;
	int n;
	int a[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0;
	for(i=0;i<n-1;i++)
	{
		if(abs( a[i]-a[i+1] ) > max )
		{
			max = a[i]-a[i+1];//abs( a[i]-a[i+1] );	
		}
		if(abs( a[i+1]-a[i] ) > max )
		{
			max = a[i+1]-a[i];//abs( a[i]-a[i+1] );	
		}

	}
	printf("%d",max);
	printf("\n");
	return 0;

}
