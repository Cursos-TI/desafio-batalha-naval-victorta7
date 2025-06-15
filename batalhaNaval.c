#include <stdio.h>

int main() {
    // --- MOVIMENTOS DE OUTRAS PEÇAS (exemplo) ---
    // printf("Direita\n");
    // printf("Cima\n");
    // printf("Esquerda\n");
    // etc...

    // Espaço em branco para separar os movimentos do Cavalo
    printf("\n");

    // --- MOVIMENTO DO CAVALO ---

    // Definindo constantes para o movimento
    const int passos_baixo = 2;
    const int passos_esquerda = 1;

    // Comentário explicando a lógica:
    // O cavalo se moverá 2 casas para baixo (repetidamente com o loop for)
    // e depois 1 casa para a esquerda (dentro do while loop)

    // Loop FOR para os passos para baixo
    for (int i = 0; i < passos_baixo; i++) {
        printf("Baixo\n");
    }

    // Loop WHILE para o passo para esquerda
    int j = 0;
    while (j < passos_esquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
