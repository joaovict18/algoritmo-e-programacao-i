#include <stdio.h> // inclui a biblioteca para entrada e saída de dados

int main() { // declaração da função main (principal)
	
	int num; // declaração de uma variável do tipo inteiro chamada num
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("PAR!");
	} else {
		printf("IMPAR!");
	}
	
	return 0;
}
