#include<stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite o 1o inteiro: ");
    scanf("%d", &n1);
    printf("Digite o 2o inteiro: ");
    scanf("%d", &n2);
    printf("Digite o 3o inteiro: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("O 1o numero e maior");
    } 
    else if (n2 > n1 && n2 > n3) { // funciona como uma segunda alternativa para o if e pode ser usado mais de uma vez
        printf("O 2o numero e maior");
    } else {
        printf("O 3o numero e maior");
    }

    return 0;
}