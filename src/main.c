#include "TP_lib.h"
#include "TP_lib.c" 

	short resultat; 
	unsigned short points=0;


void main(void)

{
	
	while(resultat!=1)
		
	{
		 resultat=
		LancerDe();
		 
		if(resultat==2 ||    resultat==4 || resultat==6)
			
			points=resultat;
		
		else if(resultat==3)
			
			points=points*2;
		
		else if(resultat==5)
		
			points=points-2;
			
	}
	
}
