#include<stdio.h>
void imprime(float v1[], float v2[], float v3[], float v4[])
{
	int i;

	for(i=0; i<5; i++)
		printf(" %.2f\t", v1[i]);
	printf("\n");

	for(i=0; i<5; i++)
		printf(" %.2f\t", v2[i]);
	printf("\n");

	for(i=0; i<5; i++)
		printf(" %.2f\t", v3[i]);
	printf("\n");

	for(i=0; i<5; i++)
		printf(" %.2f\t", v4[i]);
	printf("\n");
}
