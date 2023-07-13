#include <stdio.h>

int main() {
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("PAR!");
	} else {
		printf("ÍMPAR!");
	}
	
	return 0;
}
