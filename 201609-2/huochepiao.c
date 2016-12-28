#include<stdio.h>
int main()
{
	int n,i;
	int a[100]={0};
	int b[100][6]={0};
	
	//输入数据 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//处理数据:把能够连坐的放在一起； 
	int c,j,k;
	int count=0;
	for(i=0;i<n;i++)
	{
		c=a[i];
		for(j=0;j<100;j++)
		{
			if(5 - b[j][5] >= c)
			{
						for(k=0;k<5;k++)
						{
							if(b[j][k] != 0)
							{
								continue;
							}
							b[j][k] = j*5 + k+1;
							printf("%d ",b[j][k]);
							c--;
							if( c == 0)
							{
								break;
							}
						}
						printf("\n");
						b[j][5]+=a[i];
						break; 	
			}
			count++;		
		}
		
		//如果检查了一遍都没有找到可以放的地方，不连坐安放； 
		if(count == 100)
		{
				count = 0;
				for(j=0;j<100;j++)
				{
					for(k=0;k<5;k++)
					{
						if(b[j][k] == 0)
						{
							b[j][k] = j*5 + k+1;
							b[j][5]+=1;
							printf("%d ",b[j][k]);
							c--;
							if( c == 0)
							{
								break;
							} 
						}
						
					}
					if( c == 0 )
					{
						break;
					}
				}			
		}		
	}
	
	//处理数据，把不能连坐的分开坐；
/*	
	for(i=flag;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
			for()
		}	
	}
*/
	 
	//检测数据 
/*	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
*/
	
	return 0;
}
