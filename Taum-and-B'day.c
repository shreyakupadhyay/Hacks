#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int a,b,c,d,e;
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
        {
        scanf("%lld",&a);
        scanf("%lld",&b);
        scanf("%lld",&c);
        scanf("%lld",&d);
        scanf("%lld",&e);
        if((c+e)>=d && (d+e)>=c)
            {
            printf("%lld\n",a*c + b*d);
        }
        else if((c+e)<d)
            {
           printf("%lld\n",(c+e)*b + a*c);
        }
        else if((d+e)<c)
            {
            printf("%lld\n",(d+e)*a + b*d);
        }
        }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
