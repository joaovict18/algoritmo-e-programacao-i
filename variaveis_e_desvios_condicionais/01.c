#include<stdio.h> // adiciona biblioteca de entrada e saida

int main() { // declaracao de funcao do tipo inteiro

    int n; // declaracao de variavel do tipo inteiro

    printf("Digite um numero inteiro: "); // mostra na tela a mensagem entre parenteses
    scanf("%d", &n); // entrada de dados via teclado para um numero inteiro

    if (n % 2 == 0) { // condicao "se" em caso do resto da divisao da variavel n por 2 for igual a 0
        printf("Par");
    } else { // mostra a mensagem entre parenteses caso a primeira condicao nao seja verdadeira
        printf("Impar");
    }


    return 0; // retorna zero em caso de exito
}