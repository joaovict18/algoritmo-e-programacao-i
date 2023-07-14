#include<stdio.h>

int main() {
	
	int n1, n2, maior, menor;
	
	printf("Digite o 1o numero: ");
	scanf("%d", &n1);
	printf("Digite o 2o numero: ");
	scanf("%d", &n2);
	
	if (n1 > n2) {
		maior = n1;
		menor = n2;
	} else {
		maior = n2;
		menor = n1;
	}
	
	if (maior % menor == 0) {
		printf("Sao multiplos");
	} else {
		printf("NAO sao multiplos");
	}
	
	return 0;
}
