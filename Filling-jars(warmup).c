#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
    long int a,b,i,z,j,c,d,e;
    static long int count=0;
    scanf("%ld %ld",&a,&b);
    for(i=1;i<=b;i++)
        {
        scanf("%ld %ld %ld",&c,&d,&e);
        count=count+(d-c +1)*e;
        }
    z=trunc(count/a);
    printf("%ld",z);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
    }
