#include<stdio.h>
int main()
{
    int n,i,j,k;
    int piao[100]={0};
    int zuo[100][6]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&piao[i]);
    }


  // for(i=0;i<n;i++)
  // {
  //     printf("%d ",piao[i]);
  // }
  // printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<100;j++)
      //  while(j<100)
        {
            for(k=0;k<4;k++)
            {
                zuo[j][5]=5-piao[i];
                zuo[j][k]=j*5+k+1;
                piao[i]--;
                if(piao[i]==0)
                {
                    break;
                }
            }
           // j++;
            if(piao[i] == 0)
            {
                break;
            }
        }
    }


        for(j=0;j<100;j++)
        {
            for(k=0;k<4;k++)
            {
                if(zuo[j][k] == 0)
                {
                    break;
                }
                printf("%d ",zuo[j][k]);
            }
            printf("\n");
        }

        return 0;
}
