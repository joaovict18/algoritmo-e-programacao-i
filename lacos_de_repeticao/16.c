#include <stdio.h>

int main () {
	
	int par, i, num, termo = 1;
	char reinicio = 'S'; // declaracao de variavel do tipo char
	
	while (reinicio == 's' || reinicio == 'S') { // loop iniciado ja com a variavel do tipo char contendo "s" ou "S", dado que o usuario pode digitar das duas formas
	printf ("Digite o %dº número: ", termo);
	scanf ("%d", &num);
	termo++;
	par = num % 2;
	if (par == 0) {
		i++;
	}
	printf ("Deseja digitar outro número? (s/n)\n");
	scanf (" %c", &reinicio);
	
	}
	
	printf ("A quantidade de numeros par digitados foi %d", i);
	
	return 0;
}
