#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main(){
    int test;
    scanf("%d",&test);
    int i;
    int arr[test];
    for(i=0;i<test;i++)
        {
        scanf("%d",&arr[i]);
    }
    int a;
    a=arr[test-1];
    int j;
    for(j=0;j<test-1;j++)
        {
        if(arr[test-2-j]>a)
            {
            arr[test-1-j]=arr[test-2-j];
        }
        else if(arr[test-2-j]<a)
            {
            arr[test-1-j]=a;
             int h;
                for(h=0;h<test;h++)
                printf("%d ",arr[h]);
   
            break;
        }
        int k;
        for(k=0;k<test;k++)
            {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    if(arr[0]>a)
                {
                arr[0]=a;
    int o;
    for(o=0;o<test;o++)
        printf("%d ",arr[o]);
    }

   
   return 0;
}
