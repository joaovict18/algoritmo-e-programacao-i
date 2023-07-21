#include <stdio.h>

int main () {

	// variavel que é o código do produto
	int cod;
	
	printf ("Esta e a nossa tabela de produtos:\n");
	printf ("|Codigo |Produto     |\n");
	printf ("|1001   |Sunga       |\n");
	printf ("|1002   |Maio        |\n");
	printf ("|1003   |Oculos      |\n");
	printf ("|1004   |Touca       |\n");
	printf ("|1005   |Nadadaeiras |\n");
	
	printf ("Digite aqui o codigo do produto que vc deseja: ");
	scanf ("%d", &cod);
	
	if (cod == 1001) {
		printf ("O produto correspondente ao codigo digitado e a Sunga que custa 100,00");
	} else if (cod == 1002) {
		printf ("O produto correspondente ao codigo digitado e o Maiô que custa 200,00");
	} else if (cod == 1003) {
		printf ("O produto correspondente ao codigo digitado e o Óculos que custa 110,00");
	} else if (cod == 1004) {
		printf ("O produto correspondente ao codigo digitado e a Touca que custa 50,00");
	} else if (cod == 1005) {
		printf ("O produto correspondente ao codigo digitado e o Nadadeiras que custa 130,00");
	} else {
		printf ("O codigo nao corresponde a um produto cadastrado");
	}

	return 0;
}
