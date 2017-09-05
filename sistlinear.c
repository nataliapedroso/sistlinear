#include<stdio.h>
void imprime(float mat[4][5])
{
	int l, c;
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
			printf(" %.2f\t", mat[l][c]);
		printf("\n");
	}
}
main()
{
	int l, c;
	float m1[4][5];

	printf("\n Informe os elementos da matriz: \n");
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			printf(" [%d][%d]: ", l, c);
			scanf("%f", &m1[l][c]);
		}
	}

	imprime(m1[4][5]);

