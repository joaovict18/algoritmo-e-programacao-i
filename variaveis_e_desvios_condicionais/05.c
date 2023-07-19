#include<stdio.h>

int main() {

    float s0, v, t, s;

    printf("Digite a posicao inicial, em km: ");
    scanf("%f", &s0);
    printf("Digite a velocidade, em km/h: ");
    scanf("%f", &v);
    printf("Digite o tempo, em h: ");
    scanf("%f", &t);

    s = s0+v*t;

    printf("A posicao final e %.1f km/h", s); // o .1 logo apos a % trata-se da formatacao das casas decimais

    return 0;
}