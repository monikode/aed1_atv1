#include <stdio.h>

struct dma
{
    int dia;
    int mes;
    int ano;
} typedef dma;

const int dia_meses[12]
    = { 31, 28, 31, 30, 31, 30, 
       31, 31, 30, 31, 30, 31 };
       
int conta_bissextos(dma data)
{
	int anos = data.ano;
	
    if (data.mes <= 2)
        anos--;
        
    return anos / 4 
           - anos / 100
           + anos / 400;
}
       
int diferenca(dma inicio, dma fim)
{
	int i;
    long int dias_inicio = inicio.ano * 365 + inicio.dia;
  
    for (i = 0; i < inicio.mes - 1; i++)
        dias_inicio += dia_meses[i];
  
    dias_inicio += conta_bissextos(inicio);
  
    long int dias_fim = fim.ano * 365 + fim.dia;
    for (i = 0; i < fim.mes - 1; i++)
    {
    	dias_fim += dia_meses[i];	
	}
        
    dias_fim += conta_bissextos(fim);
  
  	return dias_fim - dias_inicio;
}

int main (int argc, char** argv)
{
	dma inicio, fim;
	
	printf("Insira a primeira data (em numeros):\n");
	printf("Dia: ");
	scanf("%d", &inicio.dia);
	printf("Mes: ");
	scanf("%d", &inicio.mes);
	printf("Ano: ");
	scanf("%d", &inicio.ano);
	
	printf("\nInsira a segunda data (em numeros):\n");
	printf("Dia: ");
	scanf("%d", &fim.dia);
	printf("Mes: ");
	scanf("%d", &fim.mes);
	printf("Ano: ");
	scanf("%d", &fim.ano);
	
	printf("A diferenca entre as datas eh de %d dia(s).\n", diferenca(inicio, fim));
	
	return 0;
}
