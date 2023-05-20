/*

	Nome: Monike Freitas de Sousa
	Mat:  2115310040

*/

#include <stdio.h>

int main (int argc, char** argv)
{
	int i;
	float notas[4], acm = 0;
	
	printf("Insira 4 notas:\n");
	for(i=0;i<4;i++)
	{
		printf("[%d] = ", i);
		scanf("%f", &notas[i]);
		
		acm+=notas[i];
	}
	acm/=4;
	printf("\n");
	
	for(i=0;i<4;i++)
	{
		printf("[%d] = %.2f\n", i, notas[i]);
	}
	
	printf("Media das notas: %.2f", acm);
	return 0;
}
