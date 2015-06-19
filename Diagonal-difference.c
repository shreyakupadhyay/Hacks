#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d",&a);
	int arr[a][a];
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
		{
			scanf("%d",&arr[i][j]);
			/* code */
		}
		
		/* code */
	}
	int count = 0;
	for(int k=0; k < a;k++)
	{
		count=count + arr[k][k];
	}
	int cou=0;
	for(int h=0; h < a; h++)
	{
		cou = cou + arr[a-h-1][h];
	}
	int num;
	if(cou >= count)
		{
			num = cou - count;
			printf("%d\n",num );
		} 
	else if(cou < count)
	{
		num = count -cou;
		printf("%d\n", num );
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
