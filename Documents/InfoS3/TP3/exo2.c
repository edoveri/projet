#include<stdio.h>

/*fait la somme de la première diagonale*/
int somme_diag1(int matrice [N][N])
{
	int i,j;
	int somme1=0;
	
	for (i=0;i<N;i++)
		for(j=0;j<N;j++)
			
/*fait la somme de la deuxième diagonale*/
int somme_diag2(int matrice [N][N])
{
	int l,c;
	int somme2=0;

	for (i=0;i<N;i++)
		for(j=0;j<N;j++)

/*fait la somme de toute la ligne i*/
int somme_ligne(int matrice [N][N],int i)
{
	int c;
	int somme3=0;

	for (c=0;c<N;c++)
		somme = somme + matrice[i][c];
}

/*fait la somme de la colonne i*/
int somme_colonne(int matrice [N][N],int i)
{
	int l;
	int somme4=0;

	for(l=0;l<N;l++)
		somme = somme + matrice[l][i];
}

/*fonction principale*/
int main(void)
{
	int N,S=0;

	printf("Donnez la taille de la matrice : \n");
	scanf("%i",N);
	if(somme1=somme2)
		S=somme1;
	else
		printf("Cette matrice n'est pas un carré magique. \n");

	