#include <stdio.h>

int main() {

    printf("Movimentos das peças de Xadrez \n");

    int i;

    // TORRE usando FOR
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // BISPO usando WHILE
    // Movimento: 5 casas na diagonal para cima e para a direita
    printf("Movimento do Bispo (5 casas na diagonal para Cima e para Direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // RAINHA usando DO WHILE
    // Movimento: 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
