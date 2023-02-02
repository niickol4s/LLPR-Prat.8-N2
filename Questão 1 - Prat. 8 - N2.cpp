#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define total 10

void ordenar_por_selecao(int num[], int tamanho) {
	
	int menor; 
	int aux;
	
	for(int x = 0; x < total; x++) {
		menor = x;
		for(int y (x + 1); y < tamanho; y++) {
			if(num[y] < num[menor]) menor = y;
		}
		
		if(x != menor) {
			aux = num[x];
			num[x] = num[menor];
			num[menor] = aux;
		}
	}
	
}
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade[total];
	
	printf("\nLer idade de 10 pessoas e mostrar em ordem crescente.");
	
	// Leitura das idades
	for(int i = 0; i < total; i++) {
		printf("\nInsira a idade da %dª pessoa: ", i + 1);
		scanf("%d", &idade[i]);
	}
	
	ordenar_por_selecao(idade, total);
	
	printf("\nAs idades inseridas em ordem crescente: \n");
	
	for(int z = 0; z < total; z++) {
		printf("\n%d", idade[z]);
	}
	return 0;
}
