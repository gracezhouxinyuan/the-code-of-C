#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    int num7,num9;
    
    for(a=1;a<7;a++)
    {
        for(b=0;b<7;b++)
        {
            for(c=0;c<7;c++)
            {
               num7=a*7*7+b*7+c;
               num9=c*9*9+b*9+a;
               if (num9==num7&&num7>=100&&num7<=999)
                 {
                     printf("%d\n",num7);
                 }  
            }
        }
    }

    return 0;
}