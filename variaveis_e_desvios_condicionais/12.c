#include<stdio.h>

int main() {

    // declaracao de variaveis
    int qtd; 
    // declaracao de quantidades elegiveis para desconto (qtdD) e unitarias (qtdS)
    float qtdD, qtdS;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qtd);
    
    // a linha abaixo retira quantas vezes e possivel dividir a quantidade por 2, tendo assim o numero de pares da quantidade
    qtdD = qtd / 2;
    // a linha abaixo retira a divisao inteira da quantidade por 2, ou seja, quantifica aqueles que nao sao pares
    qtdS = qtd % 2;

    // o calculo feito no printf abaixo e responsavel pela soma do preco das duas quantidades, que e somada por terem sido identificadas de modos distintos
    printf("O preco a ser pago sera de R$%.2f", (qtdD * 3 + qtdS * 3));

    return 0;
}