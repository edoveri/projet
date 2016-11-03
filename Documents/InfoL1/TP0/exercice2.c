#include<stdio.h>
int main(void)
/*lit un nombre entier représentant une durée en secindes et affiche cette durée en minutes et secondes*/
{
	int duree;
	int minutes=0;
	int heures=0;
	printf("Donnez la durée en secondes : ");
	scanf("%i",&duree);
	if(duree<0)
		printf("Erreur : la durée saisie est négative.");
	else
		minutes=duree/60;
		heures=minutes/60;
		printf("La durée est de %i heures, %i minutes et %i secondes.\n",heures,minutes,duree-minutes*60);
	return 0;
}
		
	
