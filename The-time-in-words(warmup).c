#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	char *arr[30]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
	if(b==0)
	{
		printf( "%s o' clock ",arr[a-1]);
	}
	else if (b==1)
	{
		printf( "%s minute past %s ",arr[b-1],arr[a-1]);
		/* code */
	}
    else if(b==15)
    {
        printf("quarter past %s",arr[a-1]);
    }
	else if (b<30 && b>1 && b!=15)
	{
		printf( "%s minutes past %s ",arr[b-1],arr[a-1]);
		/* code */
	}
	else if (b==30)
	{
		printf("half past %s",arr[a-1]);
		/* code */
	}
    else if(b==45)
    {
        printf("quarter to %s",arr[a+1-1]);
    }
	else if (b>30 && b<59 && b!=45)
	{
		printf( "%s minutes to %s",arr[60-b-1],arr[a+1-1]);
		/* code */
	}
    if(b==59)
    {
        printf("%s minute to %s",arr[60-b-1],arr[a+1-1]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
