#include <stdio.h>

int main (int argc, char** argv)
{
	int n, i, j, acm_linha = 0, acm_diagonal_s = 0, eh_qm = 1;
	
	printf("n = ");
	scanf("%d", &n);
	
	int a[n+1][n+1];
	
	a[n][n] = 0;
	
	printf("Insira numeros da Matriz A:\n");	
	for(i = 0; i<n ; i++)
	{
		if(i == 0)
		{
			a[i][n] = 0;
		}
		
		for(j=0 ; j<n; j++)
		{
			if(i == 0)
			{
				a[n][j] = 0;
			}
			
			printf("[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
			
			a[i][n] += a[i][j];
			a[n][i] += a[i][j];
			
			if(i == j)
			{
				a[n][n] += a[i][j];
			}
			
			if(n - j -1 == i) 
			{
				acm_diagonal_s += a[i][j];
			}
			
		}
		
		if(i > 0 && a[i-1][n] != a[i][n] && a[i][n] != acm_diagonal_s)
		{
			eh_qm = 0;
		}
		
		for(j=1 ; j<n && i == n-1; j++)
		{
			if(a[n][j] != a[n][j-1] && a[n][j] != acm_diagonal_s)
			{
				eh_qm = 0;
			}
				
		}
	}
	
	printf("\nMatriz A:\n");	
	for(i = 0; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d ", a[i][j]);
		}	
		
		printf("\n");
	}
	
	if(eh_qm)
	{
		printf("\nA matriz eh um quadrado magico!\nSoma = %d", a[n][n]);
	}else
	{
		printf("\nA matriz nao eh um quadrado magico :(\n");
	}
	
	return 0;
}
