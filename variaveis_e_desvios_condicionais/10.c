#include <stdio.h>

int main () {
	
	// quantidade, preço total
	int quant;
	float pt;
	
	printf ("Digite a quantidade de unidades: ");
	scanf ("%d", &quant);
	
	if (quant < 5) {
		pt = quant * 3;
	} else {
		pt = quant * 2.50;
	}
	
	printf ("O valor total é %.2f", pt);
	
	return 0;
}
