#include <stdio.h>

int main() {
    // Simulação do movimento da Torre
    int torre_movimento = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torre_movimento; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo
    int bispo_movimento = 5;
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < bispo_movimento) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha
    int rainha_movimento = 8;
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < rainha_movimento);
    printf("\n");

    return 0;
}