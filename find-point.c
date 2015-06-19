#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int test,i,a,b,c,d;
    scanf("%d",&test);
    for(i=0;i<test;i++)
        {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("%d ",2*c-a);
        printf("%d\n",2*d-b);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
