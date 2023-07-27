#include <stdio.h>

int main() {
    int tamanho;
    int linha, coluna;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

	// a cada repeticao do for abaixo, o for dentro dele executa enquanto a condicao se satisfazer
    for (linha = 0; linha < tamanho; linha++) { // 3 parametros, a primeira inicializa o valor na variavel, a primeira realiza uma comparacao e a terceira incrementa o valor na propria
        for (coluna = 0; coluna < tamanho; coluna++) {
            printf("* "); // linha responsavel por "construir o quadrado
        }
        printf("\n"); // essa linha executa depois de todas as execucoes possiveis do for acima e quando termina, volta para o primeiro
    }

    return 0;
}
