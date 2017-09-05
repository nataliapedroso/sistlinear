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
	float K, x1, x2, x3, x4, m1[5], m2[5], m3[5], m4[5], maux[5];

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

	printf("\n\n Imprimindo a matriz informada: \n");
	imprime(m1,m2,m3,m4);

	printf("\n\n Escalonando a matriz: \n");

	if(m1[0]!=0)
	{
		K=(m2[0]/m1[0]);
		for(i=0; i<5; i++)
			m2[i]=m2[i]-K*m1[i];
	}
	else
	{
		for(i=0; i<5; i++)
			maux[i]=m1[i];
		for(i=0; i<5; i++)
		{
			m1[i]=m2[i];
			m2[i]=maux[i];
		}
	}

	imprime(m1,m2,m3,m4);

	if(m3[0]!=0)
	{
		K=m3[0]/m1[0];
		for(i=0; i<5; i++)
			m3[i]=m3[i]-K*m1[i];
	}

	imprime(m1,m2,m3,m4);

	if(m4[0]!=0)
	{
		K=(m4[0]/m1[0]);
		for(i=0; i<5; i++)
			m4[i]=m4[i]-K*m1[i];
	}

	imprime(m1,m2,m3,m4);

	if(m2[1]!=0)
	{
		K=(m3[1]/m2[1]);
		for(i=0; i<5; i++)
			m3[i]=m3[i]-K*m2[i];
	}
	else
	{
		for(i=0; i<5; i++)
			maux[i]=m2[i];
		for(i=0; i<5; i++)
		{
			m2[i]=m3[i];
			m3[i]=maux[i];
		}
	}

	imprime(m1,m2,m3,m4);

	if(m4[1]!=0)
	{
		K=(m4[1]/m2[1]);
		for(i=0; i<5; i++)
			m4[i]=m4[i]-K*m2[i];
	}

	imprime(m1,m2,m3,m4);
