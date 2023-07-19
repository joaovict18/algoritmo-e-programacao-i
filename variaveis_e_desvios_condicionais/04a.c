#include<stdio.h>

int main() {

    float l1, l2, l3; // declaracao de tres variaveis do tipo float (numero com virgula)

    printf("Digite o 1o lado: ");
    scanf("%f", &l1);
    printf("Digite o 2o lado: ");
    scanf("%f", &l2);
    printf("Digite o 3o lado: ");
    scanf("%f", &l3);

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) { // serie de condicoes que verificam se os lados formam um triangulo
        printf("Formam triangulo");
    } else {
        printf("Nao formam triangulo");
    }

    return 0;
}