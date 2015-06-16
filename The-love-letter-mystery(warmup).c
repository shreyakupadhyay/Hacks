#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
        char arr[10001];
        scanf("%s",arr);
        int count=0;
        for(j=0;j<strlen(arr)/2;j++)
            {
            if(arr[j]<arr[strlen(arr)-1-j])
                {
                count=arr[strlen(arr)-1-j]-arr[j] + count;
                }
            if(arr[j]>arr[strlen(arr)-1-j])
                {
                count=arr[j]-arr[strlen(arr)-1-j] + count;
                }
            }
        printf("%d\n",count);
        }
    return 0;
    }
