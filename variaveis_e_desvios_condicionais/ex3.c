#include<stdio.h>

int main() {

    int l1, l2, l3;

    printf("Digite o 1o lado: ");
    scanf("%d", &l1);
    printf("Digiteo  2o lado: ");
    scanf("%d", &l2);
    scanf("Digite o 3o lado: ");
    scanf("%d", &l3);

    if ((l1 + l2 < l3) && (l1 + l3 < l2) && (l2 + l3 < l1)) {
        printf("Os lados digitados formam um triangulo");
    } else {
        printf("Os lados NAO formam um triangulo");
    }

    return 0;
}