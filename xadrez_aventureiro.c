#include <stdio.h>

int main() {

    const int LIMIT_MOV_TORRE = 5;
    const int LIMIT_MOV_BISPO = 5;
    const int LIMIT_MOV_RAINHA = 8;
    const int LIMIT_MOV_CAVALO_BAIXO = 2;
    const int LIMIT_MOV_CAVALO_ESQUEDA = 1;

    //movimento da torre...
    printf("Movimento da torre...\n");
    int cont_torre = 1;
    while (cont_torre <= LIMIT_MOV_TORRE) {
        printf("Direita.\n");
        cont_torre++;
    }

    printf("\nMovimento do Bispo...\n");
    int cont_bispo = 1;
    do {
        printf("Cima, Direita.\n");
        cont_bispo++;
    } while (cont_bispo <= LIMIT_MOV_BISPO);

    printf("\nMovimento da Rainha...\n");
    for (int cont_rainha = 1; cont_rainha <= LIMIT_MOV_RAINHA; cont_rainha++) {
        printf("Esquerda.\n");
    }

    printf("\nMovimento do Cavalo...\n");
    for (int cont_cavalo_baixo = 1; cont_cavalo_baixo <= LIMIT_MOV_CAVALO_BAIXO; cont_cavalo_baixo++) {
        printf("Baixo.\n");
        if (cont_cavalo_baixo == LIMIT_MOV_CAVALO_BAIXO) {
            int cont_cavalo_esquerda = 1;
            while (cont_cavalo_esquerda <= LIMIT_MOV_CAVALO_ESQUEDA) {
                printf("Esquerda.\n");
                cont_cavalo_esquerda++;
            }
        }
    }
}

