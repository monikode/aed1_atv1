/*

	Nome: Monike Freitas de Sousa
	Mat:  2115310040

*/

#include <stdio.h>

int main (int argc, char** argv)
{
	int i, j;
	float notas[10], acm = 0, nota = 0;
	
	for(i=0;i<10;i++)
	{
		printf("Aluno %d =======================\n", i + 1);
		acm = 0;
		printf("Insira 4 notas:\n");
		for(j=0;j<4;j++)
		{
			printf("[%d] = ", j);
			scanf("%f", nota);
			
			acm+=nota;
		}
		
		notas[i] = acm/4;
		
	
	}

	printf("\nAlunos com notas maiores ou iguais a 7.0:\n");
	
	for(i=0;i<10;i++)
	{
		if(notas[i] >= 7.0) 
		{
			printf("Aluno %d - Media %.2f\n", i + 1, notas[i]);
		}
	
	}
	
	return 0;
}
