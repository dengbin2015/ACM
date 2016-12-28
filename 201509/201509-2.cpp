#include<stdio.h>
int main()
{
	int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int mth_yun[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year,data,mouth,day,i;
	int yun=0;
	int sum=0;
	scanf("%d",&year);
	scanf("%d",&data);
	
	if( (year%4 == 0 && year%100 != 0)  || year%400 ==0)
	{
		yun=1;
	}
	
	if(yun == 0)
	{
		for(i=0;i<12;i++)
		{
			sum+=mth[i];
			if(sum >= data)
			{
				mouth=i+1;
				day=data-sum+mth[i];
				break;
			}
		}
	}
	else
	{
		for(i=0;i<12;i++)
		{
			sum+=mth_yun[i];
			if(sum >= data)
			{
				mouth=i+1;
				day=data-sum+mth_yun[i];
				break;
			}
		}
	}
	printf("%d\n",mouth);
	printf("%d",day);
	return 0;
}
