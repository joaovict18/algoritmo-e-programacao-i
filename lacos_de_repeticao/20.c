#include <stdio.h>

int main() {
    int cateto;
    
    // Recebe a medida dos catetos do usuário
    printf("Digite a medida dos catetos do triangulo retangulo isosceles: ");
    scanf("%d", &cateto);

    // Desenha o triângulo retângulo isósceles
    for (int i = 1; i <= cateto; i++) {
        // O loop externo controla as linhas do triângulo. Inicia em 1 e vai até o valor inserido pelo usuário (cateto).
        // Cada iteração desse loop imprime uma linha do triângulo.

        for (int j = 1; j <= i; j++) {
            // O loop interno controla a quantidade de asteriscos (*) em cada linha do triângulo.
            // Inicia em 1 e vai até o valor atual do loop externo (i).
            // Cada iteração desse loop interno imprime um asterisco.

            printf("* ");
            // Imprime um asterisco com um espaço após ele para melhorar a formatação visual do triângulo.
        }

        printf("\n");
        // Após imprimir os asteriscos da linha, adiciona uma quebra de linha para passar para a próxima linha do triângulo.
    }

    return 0;
}
