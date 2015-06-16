#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int test,num;
	scanf("%d",&test);
	int arr[test];
	for(int i=0;i<test;i++)
	{
		scanf("%d",&arr[i]);
	}
	num=1001;
	while(num>0)
	{
	int count=1001;
	for(int j=0;j<test;j++)
	{
		if (arr[j]<count && arr[j]!=0)
		{
			count=arr[j];			/* code */
		}
	}
	num=0;
	for(int k=0;k<test;k++)
	{
		if(arr[k]!=0)
		{
			arr[k]=arr[k]-count;
			num=num+1;
		}
	}
        if(num!=0)
	printf("%d\n",num);
	}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
