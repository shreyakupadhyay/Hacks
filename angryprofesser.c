#include<stdio.h>
int main()
    {
    int test,time;
    long int i,n,k,j,count;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
            {
        count=0;
        scanf("%ld",&n);
        scanf("%ld",&k);
        for(j=1;j<=n;j++)
            {
            scanf("%d",&time);
            if(time<=0)
                count=count+1;
        }
        if(count<k)
            printf("YES \n");
        else 
            printf("NO \n");
       }
    return 0;
}
       
              

