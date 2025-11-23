#include<stdio.h>
int main()
{
    int num[4]={1,2,3,4};
    int rst=0;
    int count=0;
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(i==j)
            {
                continue;
            }
            for(k=0;k<=3;k++)
            {
                if(i==k||j==k)
                {
                    continue;
                }
                rst=100*num[i]+10*num[j]+num[k];
                printf("%d ",rst);
                count++;
                if (count%6==0)
                {
                    printf("\n");
                }
                
            }

        }
    
    }

    
    
}