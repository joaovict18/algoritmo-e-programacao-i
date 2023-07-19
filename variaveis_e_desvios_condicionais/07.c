#include<stdio.h>

int main() {

    int idad;

    printf("Digite a idade: ");
    scanf("%d", &idad);
    printf("Categoria: ");

    // sequencia de ifs e else ifs para determinar a categoria a qual a idade se encaixa
    if (idad >= 5 && idad <= 7) {
        printf("infantil A");
    }
    else if (idad >= 8 && idad <= 10) {
        printf("infantil B");
    }
    else if (idad >= 11 && idad <= 13) {
        printf("juvenil A");
    }
    else if (idad >= 14 && idad <= 17) {
        printf("juvenil B");
    } else {
        printf("adulto");
    }

    return 0;
}