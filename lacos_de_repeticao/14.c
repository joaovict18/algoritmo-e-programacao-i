#include<stdio.h>

    int main () {
    // variaveis para definir o inicio e o fim da sequência
    int limite, minimo;
    
    printf ("Digite o numero de inicio: ");
    scanf ("%d", &minimo);
    
    printf ("Digite o numero ultimo numero da sequência: ");
    scanf ("%d", &limite);
    
    printf("Os numeros da sequência são os seguintes:\n");
    
     while (minimo <= limite) { //while ira repetir os comandos até a sua condição não se satisfazer mais
     	printf("%d\n", minimo);
         minimo++; // o comando ++ acrescenta em 1 a variavel escolhida
     	}
    
    return 0;
	}
