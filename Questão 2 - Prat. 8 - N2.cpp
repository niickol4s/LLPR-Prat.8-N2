#include <stdio.h>
#include <locale.h>

#define total 10

void ordenar_por_selecao(int num[], int tamanho) {
	
	int maior; 
	int aux;
	
	for(int x = 0; x < total; x++) {
		maior = x;
		for(int y (x + 1); y < tamanho; y++) {
			if(num[y] > num[maior]) maior = y;
		}
		if(x != maior) {
			aux = num[x];
			num[x] = num[maior];
			num[maior] = aux;
		}
	}
	
}
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade[total];
	
	printf("\nLer idade de 10 pessoas e mostrar em ordem decrescente.");
	
	for(int i = 0; i < total; i++) {
		printf("\nInsira a idade da %dª pessoa: ", i + 1);
		scanf("%d", &idade[i]);
	}
	
	ordenar_por_selecao(idade, total);
	
	printf("\nAs idades inseridas em ordem decrescente: \n");
	
	for(int z = 0; z < total; z++) {
		printf("\n%d", idade[z]);
	}
	return 0;
}
