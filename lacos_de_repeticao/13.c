#include<stdio.h>

int main() {

    int num, n;
    int i = 1; // declaracao de uma variavel contadora para o laco while

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Quantos multiplos deseja exibir? ");
    scanf("%d", &n);

    while (i <= n) { // executa enquanto a condicao nao se satisfazer
        printf("%d", num * i);
        printf("\n");
        i++;
    }


    return 0;
}