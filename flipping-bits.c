#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		long int n;
		scanf("%ld",&n);
		int j=0;
		long int c=0;
		long int arr[32]; 
		if (n==1)
		{
			long int s=4294967294;
			printf("%ld\n",s);
			/* code */
		}
		if (n==0)
		{
			long int g=4294967295;
			printf("%ld\n",g);
		}
		if(n!=1 && n!=0)
		{
		while(c!=1)
		{
			arr[31-j]=n%2;
			/*printf("%ld %ld",arr[31-j],n%2);*/
			c=n/2;
			n=n/2;
			j=j+1;
		}
		/*printf("%d",j);*/
		arr[31-j]=1;
		int k;
		for(k=0;k<=31-j-1;k++)
		{
			arr[k]=0;
		}
		int u;
		for(u=0;u<32;u++)
		{
			if (arr[u]==0)
			{
				arr[u]=1;
				/* code */
			}
			else if (arr[u]==1)
			{
				arr[u]=0;
				/* code */
			}
		}
		int h;
		long int count=0;
		for(h=0;h<32;h++)
			count=count+ arr[h]*(pow(2,31-h));
		printf("%ld\n",count);
		}
		
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
