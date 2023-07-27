//Alternativa para o exercício 12

#include <stdio.h>

int main(){
	
	int x, valor, valor1, valor2;
	
	printf("Informe a quantidade do produto: ");
	scanf("%d", &x);
	
	valor = (x * 3);
	valor1 = (x * 3)/2;
	valor2 = (x * 3)/2 + 2;
	
	printf("O valor total da sua compra foi: R$%d\n", valor);
	
	if(x % 2 == 0){
		printf("Com a promoção, o valor da sua comprar fica: R$%d", valor1);
	} else {
		printf("Com a promoção, o valor da sua ompra fica: R$%d", valor2);
	}
	
  return 0;	
}
