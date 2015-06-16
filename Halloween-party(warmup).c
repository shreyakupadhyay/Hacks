#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
        {
         long int a,i,b=(long)0,d,e,diff,dif;
        scanf("%ld\n",&a);
        for(i=1;i<=a;i++)
            {
            scanf("%ld\n",&e);
        if(e==1)
            {
            printf("%ld\n",b);
            }
        else if(e>=2 && e%2==0)
            {
            diff=e/2;
            d=diff*diff;
            printf("%ld\n",d);
            }
        else
            {
            dif=e/2;
            dif=dif*dif + dif;
            printf("%ld\n",dif);
        }
        }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
