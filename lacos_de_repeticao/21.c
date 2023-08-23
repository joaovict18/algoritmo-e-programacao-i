#include <stdio.h>

int main () {
	
	int fat, i;
	
	printf ("Digite um numero: "); // Imprime na tela uma mensagem para o usuario
	scanf ("%d", &fat); // Armazena o valor digitado pelo usuario via teclado
	
	i = fat - 1;
	
	if (fat == 0) { // Testa a condição para quando fat for igual a 0, ja que o fatorial do numero 0 é 1
		fat = 1;
	} else {
		while(i >= 1) {
		fat = fat * i;  // Multiplicamos fat pelo valor atual de i, a cada repetição do laço i diminui até chegar em 1
    	i--;  // Diminuimos o valor de i em 1 a cada interação.
		}
	}
	
	printf ("O fatorial desse numero é igual a %d", fat); // Exibimos o valor de fat
	
	return 0;
}
