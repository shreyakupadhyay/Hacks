#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    int a,i,j,b=0;
    scanf("%d",&a);
    for(j=1;j<=a;j++)
        {
        int count=0;
        char arr[100001];
        scanf("%s",arr);
        for(i=0;i<strlen(arr);i++)
        {
        if(arr[i]==arr[i+1])
            {
            count=count+1;
            }      
        }
        printf("%d\n",count);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;   
    }
