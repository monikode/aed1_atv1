/*

	Nome: Monike Freitas de Sousa
	Mat:  2115310040

*/

#include <stdio.h>

int main (int argc, char** argv)
{
	int vetor[5], i;
	
	printf("Insira 5 numeros inteiros:\n");
	for(i=0;i<5;i++)
	{
		printf("[%d] = ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		printf("[%d] = %d\n", i, vetor[i]);
	}
	
	return 0;
}
