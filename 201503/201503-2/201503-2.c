#include<stdio.h>
int main()
{
	int i,j,k;
	int n=0;
	int a[1000]={0};
	int b[1000]={0};
	int c[1000]={0};
	
	//input the num
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	//�������� 
	int temp=0;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]= a[j+1];
				a[j+1] = temp;
			}
		}
	
	//��ȡ������b[]�ʹ�����c[] 
	int num = 1;
	j = 0;
	for(i=0;i<n;i++)
	{
		if(a[i] == a[i+1])
		{
			num++;
			if(i < n-1)
			continue;
		}
		b[j]=a[i];
		c[j]=num;
		j++;
		num = 1;
	}
	
	//�Դ�������c[]���� ��ͬʱb[]����c[]����  
	for(i=0;i<j;i++)
		for(k=0;k<j-i-1;k++)
		{
			if(c[k]<c[k+1])
			{
				temp = c[k];
				c[k]= c[k+1];
				c[k+1] = temp;
				
				temp = b[k];
				b[k]= b[k+1];
				b[k+1] = temp;
				
			}
		}
	//������� 
	for(k=0;k<j;k++)
	{
		printf("%d %d",b[k],c[k]);
		printf("\n"); 
	}		
	
/*	for(i=0;i<j;i++)
	{
		printf("%d ",b[i]);
	}
	
	printf("\n");
	
	for(i=0;i<j;i++)
	{
		printf("%d ",c[i]);
	}

	//�������
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	*/
	return 0;
}
