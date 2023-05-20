/*

	Nome: Monike Freitas de Sousa
	Mat:  2115310040

*/

#include <stdio.h>

int main (int argc, char** argv)
{
	int i;
	float vetor[10];
	
	printf("Insira 10 numeros reais:\n");
	for(i=0;i<10;i++)
	{
		printf("[%d] = ", i);
		scanf("%f", &vetor[i]);
	}
	
	printf("\n");
	
	for(i=9;i>=0;i--)
	{
		printf("[%d] = %.2f\n", i, vetor[i]);
	}
	
	return 0;
}
