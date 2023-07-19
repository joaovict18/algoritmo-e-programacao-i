#include<stdio.h>
int main() {
	
	int p, r, n, ene;
	
	printf("Primeiro termo: ");
	scanf("%d", &p);
	printf("Razao: ");
	scanf("%d", &r);
	printf("Intervalo de elementos: ");
	scanf("%d", &n);
	ene = p + (n - 1) * r; // formula do termo geral de uma progressao aritmetica
	printf("Enesimo elemento: %d", ene);
	
	return 0;
}