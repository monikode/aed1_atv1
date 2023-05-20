/*

	Nome: Monike Freitas de Sousa
	Mat:  2115310040

*/

#include <stdio.h>

int main (int argc, char** argv)
{
	int vetor[20], pares[20], impares[20], i, p = 0, imp = 0;
	
	printf("Insira 20 numeros inteiros:\n");
	for(i=0;i<20;i++)
	
	{
		printf("[%d] = ", i);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] % 2 == 0)
		{
			pares[p] = vetor[i];
			p++;
		}else
		{
			impares[imp] = vetor[i];
			imp++;
		}
	}
	
	printf("\nVetor:\n");
	
	for(i=0;i<20;i++)
	{
		printf("[%d] = %d\n", i, vetor[i]);
	}
	
	printf("\nPares:\n");
	
	for(i=0;i<p;i++)
	{
		printf("[%d] = %d\n", i, pares[i]);
	}
		
	printf("\nImpares:\n");
	
	for(i=0;i<imp;i++)
	{
		printf("[%d] = %d\n", i, impares[i]);
	}
	
	return 0;
}
