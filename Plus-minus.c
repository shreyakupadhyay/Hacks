#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d",&a);
	int arr[a];
	float count = 0;
	float cou=0;
	float num=0;
	for (int i = 0; i < a; ++i)
	{
		scanf("%d",&arr[i]);
		if (arr[i] > 0)
		{
			count=count +1;
			/* code */
		}
		else if(arr[i] == 0)
		{
			cou=cou+1;
		}
		else if(arr[i] < 0)
		{
			num=num+1;
		}
		/* code */
	}
	printf("%f\n",count/a );
	printf("%f\n",num/a );
	printf("%f\n",cou/a );
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
