#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

int main() {
    // Matriz do tabuleiro 10x10 inicializada com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Coordenadas iniciais dos navios (linha e coluna)
    int linha_navio_horizontal = 2;
    int coluna_navio_horizontal = 4;

    int linha_navio_vertical = 5;
    int coluna_navio_vertical = 7;

    // Validação se o navio horizontal cabe no tabuleiro
    if (coluna_navio_horizontal + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: Navio horizontal ultrapassa os limites do tabuleiro.\n");
        return 1;
    }

    // Validação se o navio vertical cabe no tabuleiro
    if (linha_navio_vertical + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: Navio vertical ultrapassa os limites do tabuleiro.\n");
        return 1;
    }

    // Verifica se as posições do navio horizontal já estão ocupadas
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] != VALOR_AGUA) {
            printf("Erro: Sobreposição detectada no navio horizontal.\n");
            return 1;
        }
    }

    // Verifica se as posições do navio vertical já estão ocupadas
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] != VALOR_AGUA) {
            printf("Erro: Sobreposição detectada no navio vertical.\n");
            return 1;
        }
    }

    // Posiciona o navio horizontal no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = VALOR_NAVIO;
    }

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = VALOR_NAVIO;
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro Batalha Naval (0 = Água, 3 = Navio):\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}