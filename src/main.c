#include "stdlib.h"
#include <math.h>
#define RAND_MAX 32767

int n=1;
long long S1=0;
int x;
int a=0;
int val=0;
int vol=0;
int y=1;
int z=0;

int main(void)

{  

   while (S1<9876)
   {
	   S1=S1+3*n;
		  n=n+1;
   }
   
   while (a<12)
   { val=val+a;
	   a=a+1;
		 x=((rand())%10)+1;
		   
   }
		   
		   while(z<20)
   {
	   if (y%3==0  ||  y%7==0)
	   {
		 vol=vol+y;
		 y=y+1;
		 z=z+1;
	   }
	   else y=y+1;
	   }
}
