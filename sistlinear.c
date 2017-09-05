#include<stdio.h>
void imprime(float mat[][])
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

