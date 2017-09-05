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

	if(m3[2]!=0)
	{
		K=(m4[2]/m3[2]);
		for(i=0; i<5; i++)
			m4[i]=m4[i]-K*m3[i];
	}
	else
	{
		for(i=0; i<5; i++)
			maux[i]=m3[i];
		for(i=0; i<5; i++)
		{
			m3[i]=m4[i];
			m4[i]=maux[i];
		}
	}

	imprime(m1,m2,m3,m4);

	printf("\n\n Fazendo a substituição reversa: \n");

	x4=(m4[4]/m4[3]);
	x3=(((m3[4])-(m3[3]*x4))/(m3[2]));
	x2=(((m2[4])-(m2[3]*x4)-(m2[2]*x3))/(m2[1]));
	x1=(((m1[4])-(m1[3]*x4)-(m1[2]*x3)-(m1[1]*x2))/(m1[0]));

	printf("\n RESULTADOS: ");
	printf("\n x1=%.2f ", x1);
	printf("\n x2=%.2f ", x2);
	printf("\n x3=%.2f ", x3);
	printf("\n x4=%.2f \n\n", x4);
}
