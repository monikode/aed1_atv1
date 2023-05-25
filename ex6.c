#include <stdio.h>

int main (int argc, char** argv)
{
	int m, n, p;
	int i, j, k;
	
	printf("m = ");
	scanf("%d", &m);
	printf("n = ");
	scanf("%d", &n);
	printf("p = ");
	scanf("%d", &p);
	
	int a[m][n], b[n][p], c[m][p];
	
	printf("Insira numeros da Matriz A:\n");
	for(i = 0; i<m ; i++)
	{
		for(j=0 ; j<n; j++)
		{
			printf("[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Insira numeros da Matriz B:\n");
	for(i = 0; i<n ; i++)
	{
		for(j=0 ; j<p; j++)
		{
			printf("[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i = 0; i<m ; i++)
	{
		for(j=0 ; j<p; j++)
		{
			c[i][j] = 0;
			
			for(k=0; k<n ; k++)
			{
				c[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
	
	printf("Produto das Matrizes A e B:\n\n");	
	for(i = 0; i<m ; i++)
	{
		for(j=0 ; j<p; j++)
		{
			printf("%d ", c[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
