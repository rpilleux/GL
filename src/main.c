#include <userint.h>
#include <ansi_c.h>
#include <stdlib.h>


 
int main(void)
{   char figure[100];
	char ligne1[80] = "nom: triangle_A";
	char ligne2[80] = "NB point: 3";				  
	char ligne3[80] = "Cordonees: 10 20 30 40 -1 -1 -1 -1";
	char nom_fig[100];
	char nb_pts;
	char x1;
	char x2;
	char y1;
	char y2;
	char coordx[10];
	char coordy[10];
	
	
	sscanf(ligne1, "%*s %s", nom_fig);
	sscanf(ligne2, "%*s %*s %u", &nb_pts);
	sscanf(ligne3, "%*u  %d %*u %u %*u", &x1, &x2);
	sprintf(coordx, "%u %u", &x1, &x2);
	sscanf(ligne3, "%*s  %*u %u %*u %u", &y1, &y2);
	sprintf(coordy, "%u %u", &y1, &y2);
	
	sprintf(figure,"%s possède %u coordonnee: %u,%u", nom_fig, &nb_pts, &x1, &y2);

	
	
	
	return 0;
	
