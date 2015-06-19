#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    int a,b,i,j,x,initial,final,arr[100000];
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<a;i++)
        {
        scanf("%d",&arr[i]);
        }
    for(j=0;j<b;j++)
        {
        scanf("%d %d",&initial,&final);
        int z = arr[initial];
            for(x=initial+1;x<=final;x++)
                {
                if(arr[x]<z)
                       {
                        z=arr[x];
                        }
                }
         printf("%d\n",z);
         }
    return 0;
    }
