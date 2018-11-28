#include "TP_lib_suite.h"
#include "my_header.h"

int main(void)
{	
	unsigned char joueur[6]= {6,5,45,41,18,16};
        unsigned char gagnante[6];
	short int p,u,j,i;
	short int tiragealemax = 0;
        short int nbgagnante = 0;
	
	for(p=0;p<100;p++)
	{    
	initialiserTirage();
	for(u=0;u<6;u++)
	{
	     gagnante[u]= tirerNumero();
	}
	for (i=0;i<6;i++)													   
	{
		for (j=0;j<6;j++)
		{	
			if(joueur[i]==gagnante[j])
			{
			nbgagnante++;
			}
		                 if( tiragalemax < nbgagnante)
				{
			       tiragalemax = nbgagnante;
				}	
		}
	}         nbgagnante = 0;
}	

   		return 0;
}
