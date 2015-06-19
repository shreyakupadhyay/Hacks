#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
        {
       int tc,N,height,i,j;
    scanf("%d \n",&tc);
    for(j=1;j<=tc;j++)
        {
    scanf("%d \n",&N);
    if(N%2==0 && N!=0)
        {
        height=1;
        for(i=2;i<=N;i=i+2)
            {
            height=2*(height)+1;
        }
      printf("%d\n",height);
    }
     if(N%2!=0 && N!=0 && N!=1)
         {
         height=2;
        for(i=3;i<=N;i=i+2)
           {
          height=2*(height+1);
        }
       printf("%d\n",height);
     }
    if(N==0)
        {
        height=1;
        printf("%d\n",height);
    }
     if(N==1)
         {
         height=1;
         printf("%d\n",2*(height));
     }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
