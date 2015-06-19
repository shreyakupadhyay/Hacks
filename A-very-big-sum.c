#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int a,i;
      scanf("%d",&a);
      long int arr[a],c=0;
      for(i=0;i<a;i++)
	      {
    	 	scanf("%ld",&arr[i]); 
     	 	c=c+arr[i];
     	  }
     printf("%ld\n",c );
      /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
      return 0;
}


