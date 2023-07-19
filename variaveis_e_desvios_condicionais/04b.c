#include<stdio.h>

int main() {

    float l1, l2, l3;

    printf("Digite o 1o lado: ");
    scanf("%f", &l1);
    printf("Digite o 2o lado: ");
    scanf("%f", &l2);
    printf("Digite o 3o lado: ");
    scanf("%f", &l3);

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        printf("Formam triangulo");
        if ((l1 == l2) && (l2 == l3)) { // condicao executada somente se a condicao onde esta inserida for verdadeira 
            printf("\nDo tipo equilatero"); // o \n pula uma linha
        }
        else if ((l1 == l2) || (l2 == l3) || (l1 == l3)) {
            printf("\nDo tipo isosceles");
        } else {
            printf("\nDo tipo escaleno");
        }
    } else {
        printf("Nao formam triangulo");
    }

    return 0;
}