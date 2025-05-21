#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
        int tabuleiro[5][5] = {0};

    // Navio horizontalmente na linha 1 (segunda linha)
    for (int coluna = 0; coluna < 3; coluna++) {
        tabuleiro[1][coluna] = 1; // Marca o navio com valor 1
        printf("Navio horizontal - Parte em: (%d, %d)\n", 1, coluna);
    }

    // Navio verticalmente na coluna 3 (quarta coluna)
    for (int linha = 2; linha < 5; linha++) {
        tabuleiro[linha][3] = 1; // Marca o navio com valor 1
        printf("Navio vertical - Parte em: (%d, %d)\n", linha, 3);
    }

    // tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
