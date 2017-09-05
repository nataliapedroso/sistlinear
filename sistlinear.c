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
main()
{
	int i;
	float K, x1, x2, x3, x4, m1[5], m2[5], m3[5], m4[5], ma[5];

	printf("\n Informe os valores da primeira linha da matriz: \n");
	for(i=0; i<5; i++)
	{
		printf(" %dº: ", i+1);
		scanf("%f", &m1[i]);
	}

	printf("\n Segunda linha: \n");
	for(i=0; i<5; i++)
	{
		printf(" %dº: ", i+1);
		scanf("%f", &m2[i]);
	}

	printf("\n Terceira linha: \n");
	for(i=0; i<5; i++)
	{
		printf(" %dº: ", i+1);
		scanf("%f", &m3[i]);
	}

	printf("\n Quarta linha: \n");
	for(i=0; i<5; i++)
	{
		printf(" %dº: ", i+1);
		scanf("%f", &m4[i]);
	}

