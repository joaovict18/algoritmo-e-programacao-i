#include <stdio.h>

int main () {
	
	int parcelas;
	// p = preço
	float p, valor;
	// char é uma variavel que armazena caracteres ao invés de números
	char pagamento;
	
	printf ("Digite o valor do produto em Reais: ");
	scanf ("%f", &p);
	
	printf ("Digite V se deseja pagar a vista, e P se deseja pagar parcelado: ");
	scanf (" %c", &pagamento); // %c é usado para armazenar variaveis do tipo char
	
	if ((pagamento == 'V') || (pagamento == 'v')) { //usamos duas condições para caso a pessoa digite o V maiusculo ou minusculo, ja que o sistema considera caracteres diferentes
		valor = p - ((p * 15)/100);
		printf ("O valor do produto é %.2f Reais", valor);
	} else if ((pagamento == 'P') || (pagamento == 'p')) { // Mesma coisa do V
		printf ("Digite em quantas parcelas deseja dividir (limite 6, minimo 2):");
		scanf ("%d", &parcelas);
			if (parcelas == 2) { // Sequencia de ifs para considerar todos os numeros de parcelas que podem ser escolhidas
				valor = p / 2;
			} else if (parcelas == 3) {
				valor = p / 3;
			} else if (parcelas == 4) {
				valor = p / 4;
			} else if (parcelas == 5) {
				valor = p / 5;
			} else if (parcelas == 6) {
				valor = p / 6;
			} else if (parcelas < 2 || parcelas > 6)
			printf ("Esta não é uma opção de numero de parcelas!");
		}
		
		printf ("O valor de cada uma das parcelas é %.2f", valor);
	
	return 0;
}
