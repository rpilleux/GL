#include "stdlib.h"
#define SEUIL 5
#define SEUILB -100
#define SEUILH 200

unsigned char bin[10] = {1,2,3,4,5,6,7,8,9,10};
 i;
 
 
void main(void)

{
 
for(i=0; i<10; i=i+1)
	{
	
	 if (bin[i]>SEUIL)
		 
		 bin[i]=1;
				
	else
		bin[i]=0;
	}
		 }
