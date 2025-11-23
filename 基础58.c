#include <stdio.h>

int main()
{
    int isPrime(int k);
    int k;
    int count=0;
    for(k=101;k<=200;k++) 
    {
        if(isPrime(k)!=0)
        {
            printf("%d ",k);
            count++;
        }
        
        if (count==10)
        {
            printf("\n");
            count=0;
        }   
    }

    for(k=301;k<=400;k++) 
    {
        if(isPrime(k)!=0)
        {
            printf("%d ",k);
            count++;
        }
        
        if (count==10)
        {
            printf("\n");
            count=0;
        }   
    }
    return 0;   
}

int isPrime(int k)
{

    int i=2;
    if(k % 2 == 0) 
    {
        return 0; 
    }
    
    for(i=3;i*i<=k;i+=2)
    {
        if(k%i==0)
        {
            return 0;
        }
       
    }
     return 1; 
}
