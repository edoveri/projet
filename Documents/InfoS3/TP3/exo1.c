#include<stdio.h>
#define N 8

/*initialise la matrice avec des '.'*/
void init_matrice (char matrice [N][N])
{
	int i,j;
	
	for (i=0;i<N;i++)
		for(j=0;j<N;j++)
			matrice [i][j]='.';
}

/*affiche la matrice ligne par ligne*/
char afficher_matrice (char matrice [N][N])
{
	int i,j;

	for (i=0;i<N;i++)
	{	
		for (j=0;j<N;j++)
			printf("%c",matrice [i][j]);
		printf("\n");
	}
	
}

/*vérifie si les coordonnées sont valides*/
int coord_valides (int a, int b)
{
	if (a>=1 && b>=1 && a<=N && b<= N)
		return 1;
	else
		return 0;
}

/*met des * là où la tour peut aller*/
void tour (char matrice [N][N], int a, int b)
{
	int i,j;

	matrice [a-1][b-1]='t';
	for (i=0;i<N;i++)
		matrice [i][b-1]='*';
	for (j=0;j<N;j++)
		matrice [a-1][j]='*';
}
	
/*début de la fonction principale*/
int main(void)
{
	char matrice [N][N];
	int a,b;

	printf("Donnez les coordonnées de la tour : \n");
	scanf("%i%i",&a,&b);
	coord_valides (a, b);
	if(coord_valides (a, b)==1)
	{
		init_matrice (matrice);
		tour (matrice,a,b);
		afficher_matrice (matrice);
	}
	else
	printf("Erreur de coordonnées. \n");
}













