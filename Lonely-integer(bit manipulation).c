#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main()
        {
        int a,i,j;
        scanf("%d",&a);
        int arr[a];
        for(i=0;i<a;i++)
            {
                scanf("%d",&arr[i]);
            }
        int k=0;
        for(j=0;j<a;j++)
            {
            int count=0;
                for(k=0;k<a;k++)
                    {
                        if(arr[j]==arr[k] && k!=j)
                            {
                                count=count+1;
                                    if(count>=1)
                                        {
                                            //printf("%d",arr[j]);
                                            break;
                                        }
                            }
                    }
            if(count==0)
                printf("%d",arr[j]);
            }
        return 0;
        }
