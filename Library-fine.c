#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int ed,em,ey,ad,am,ay;
	scanf("%d %d %d",&ed,&em,&ey);
	scanf("%d %d %d",&ad,&am,&ay);
	if (ed > ad && em==am && ey==ay)
		{
			int a;
			a=(ed-ad)*15;
			printf("%d\n",a );
			/* code */
		}	
	if (em > am && ey==ay)
	{
		int b;
		b=(em-am)*500;
		printf("%d\n",b );
		/* code */
	}
	if (ey>ay)
	{
		int c;
		c=10000;
		printf("%d\n",c );
		/* code */
	}
	if (ey<ay)
	{
		int d=0;
		printf("%d\n",d );
		/* code */
	}
	if (em<am && ey==ay)
	{
		int e=0;
		printf("%d\n", e);
		/* code */
	}
	if (ed<=ad && em==am && ey==ay)
	{
		int f=0;
		printf("%d\n",f );
		/* code */
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
