#include <userint.h>
#include <ansi_c.h>
#include <stdlib.h>




int main(void)
{   char phrase[100];
    char prenom[100];
	char nom[100];
	unsigned char age=0;
	
	printf("Entrer votre prenom svp:");
	scanf("%s", prenom);
	printf("Entrer votre nom svp:");
	scanf("%s", nom);
    printf("Entrer votre age svp:");
	scanf("%u", &age);
	sprintf(phrase,"je m'appelle %s %s et j'ai %u ans", prenom, nom, &age);
	MessagePopup("resultat", phrase);

    return 0;
}
