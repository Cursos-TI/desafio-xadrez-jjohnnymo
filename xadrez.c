#include <stdio.h>

int main() {
    // Número de casas para movimentação de cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Movimento da Torre para o loop
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo para o loop
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha para while loop
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    return 0;
}
