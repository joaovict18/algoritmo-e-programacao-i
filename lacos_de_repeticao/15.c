#include <stdio.h>

int main () {
	
	int num, quant; // declaracao de variaveis responsaveis pelos numeros digitados e quantidide dos proprios para calculo de media
	float ma, soma = 0.0; // declaracao de variaveis para media e soma 
	
	// o trecho abaixo pergunta quantos numeros serao perguntados
	printf ("Digite a quantidade de números: ");
	scanf ("%d", &quant);
	
	for (int i = 1; i <= quant; i++) { // loop que pergunta os valores e os aplica na variavel soma para calculo da media
		printf ("Digite o valor %d: ", i);
		scanf ("%d", &num);
		soma += num;
	}
	
	ma = soma / quant;
	
	printf ("A média aritmética é %.2f", ma);
	
	return 0;
}
