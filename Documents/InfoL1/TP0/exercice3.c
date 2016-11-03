#include<stdio.h>
int main(void)
/*lit un caractère indiquant la monnaie puis un réel représentant un montant et convertit ce montant en euros ou en francs*/
{
	char monnaie;
	char e;
	char f;
	float montant;
	printf("Donnez la monnaie : ");
	scanf("%c",&monnaie);
	if(monnaie!='e' && monnaie!='f')
		printf("Erreur : la monnaie entrée n'est pas valide.\n");
	else
	{
		printf("Donnez le montant : ");
		scanf("%f",&montant);
		if(monnaie=='e')
			printf("%f euros valent %f francs.\n",montant,montant*6.55957);
		else
			printf("%f francs valent %f euros.\n",montant,montant/6.55957);
	}
	return 0;
}