#include<stdio.h>
int main(void)
/*lit un nombre entier et affiche son carré*/
{
	int nombre;
	printf("Donnez un nombre : ");
	scanf("%i",&nombre);
	printf("Le carré de %i vaut %i.\n",nombre,nombre*nombre);
	return 0;
}

