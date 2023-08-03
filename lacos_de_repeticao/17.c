#include <stdio.h>

int main() {
	
	int n;
	int i = 1;
	
	printf("Digite um inteiro: ");
	scanf("%d", &n);
	
	while (i <= n) { // laço de repetição que testa o valor da variavel i e repete enquanto for verdade
		if (n % i == 0) { // esse if tem a funçao de so mostrar aqueles q dividindo por n dao um numero inteiro
			printf("%d\n", n / i);
		}
		i++; // incrementa a variavel i para evitar um looping infinito
	}

	return 0;
}