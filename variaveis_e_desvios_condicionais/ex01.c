#include <stdio.h>

int main() {
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("PAR!");
	} else {
		printf("�MPAR!");
	}
	
	return 0;
}
