#include<stdio.h>
int main()
{
	int i,m,n,a,sum=0;
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		a=n%10;
		sum+=a;
		n/=10;
	}
	printf("%d",sum);
}
