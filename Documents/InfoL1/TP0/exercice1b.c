#include<stdio.h>
#define pi 3.14159
int main(void)
/*lit un nombre en cm représentant le rayon d'un disque et affiche la circonférence et la surface du disque*/
{
	float rayon;
	printf("Donnez le rayon du cercle en cm : ");
	scanf ("%f",&rayon);
	printf("La circonférence mesure %f centimètres.\n",2*pi*rayon);
	printf("La surface est de %f centimètres carrés.\n",pi*rayon*rayon);
	return 0;
}
