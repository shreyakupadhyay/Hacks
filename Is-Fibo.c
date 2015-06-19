#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	long int a=0,b,c;
	int test,i;
    long int number;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%ld",&number);
		a=0;
		b=1;
		c=1;
	while(c < number)
	{
		a=b;
		b=c;
		c=a+b;
	}
	if(c==number)
	{
		printf("IsFibo\n");
	}
	else 
	{
		printf("IsNotFibo\n");
	}
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
