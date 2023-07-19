#include<stdio.h>

int main() {

    int n1, n2, ma, me;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro inteiro: ");
    scanf("%d", &n2);

    if (n1 > n2) { // verifica se o primeiro inteiro e maior que o segundo
        ma = n1;
        me = n2;
    } else { // executa caso a primeira nao seja satisfeita
        ma = n2;
        me = n1;
    }

    if (ma % me == 0) {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}