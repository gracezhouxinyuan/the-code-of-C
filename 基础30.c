#include <stdio.h>
#include<math.h>
int main()
{
    int side[3];
    float p=0;
    float S=0;

    int i=0;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&side[i]);
        p+=side[i];
    }
    p/=2;

    // printf("%.2f %d %d %d",p,side[0],side[1],side[2]);

    if(side[0]>=p||side[1]>=p||side[2]>=p)
    {
        printf("ERROR");
    } 
    else
    {
       S=sqrt(p*(p-side[0])*(p-side[1])*(p-side[2]));
        printf("%.2f\n",S); 
    }  

      return 0;
}