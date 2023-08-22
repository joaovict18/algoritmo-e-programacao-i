#include <stdio.h>

int main () {
	
	int i = 1, num, resul = 0, n; // declarada variavel i para percorrer os sucessores e consequentemente divisores de num, a variavel resul e responsavel pela quantidade de divisores
	
	printf ("Digite o numero a qual deseja saber se é primo: ");
	scanf ("%d", &num);
	
	if (num > 1) {
		while (i <= num) {
		n = num % i;
			if (n == 0){
				resul++;
				}
		i++;
		}
    // abaixo as condicoes que mostram se num e primo ou nao
		if (resul == 2) {
		printf ("O número é primo");	
		} else {
			printf ("O número não é primo");
		}
	}
	
	return 0;
}
