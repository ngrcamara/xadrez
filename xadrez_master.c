#include <stdio.h>

void moveTorre(int numMov) {
    if (numMov >= 1) {
        printf("Direita.\n");
        moveTorre(numMov - 1);
    }
}

void moveBispo(int numMov) {
    if (numMov >= 1) {
        printf("Cima, Direita.\n");
        moveBispo(numMov - 1);
    }
}

void moveRainha(int numMov) {
    if (numMov >= 1) {
        printf("Esquerda.\n");
        moveRainha(numMov - 1);
    }
}

int main() {

    const int LIMIT_MOV_TORRE = 5;
    const int LIMIT_MOV_BISPO = 5;
    const int LIMIT_MOV_RAINHA = 8;
    const int LIMIT_MOV_CAVALO_BAIXO = 2;
    const int LIMIT_MOV_CAVALO_ESQUEDA = 1;

    //movimento da torre... com resursividade.
    printf("Movimento da torre (resursividade)...\n");
    moveTorre(LIMIT_MOV_TORRE);


    //movimento do bispo com recursividade...
    printf("\nMovimento do Bispo (recursividade)...\n");
    moveBispo(LIMIT_MOV_BISPO);

    //movimento da rainha com recursividade...
    printf("\nMovimento da Rainha (recursividade)...\n");
    moveRainha(LIMIT_MOV_RAINHA);
    
    //movimento do cavalo...
    printf("\nMovimento do Cavalo (loops complexos)...\n");
    for (int cont_cavalo_baixo = 1; cont_cavalo_baixo <= LIMIT_MOV_CAVALO_BAIXO; cont_cavalo_baixo++) {
        printf("Cima.\n");
        if (cont_cavalo_baixo == LIMIT_MOV_CAVALO_BAIXO) {
            int cont_cavalo_esquerda = 1;
            while (cont_cavalo_esquerda <= LIMIT_MOV_CAVALO_ESQUEDA) {
                printf("Direita.\n");
                cont_cavalo_esquerda++;
            }
        }
    }

    //movimento do bispo com loops aninhados...
    printf("\nMovimento do Bispo (loops aninhados)...\n");
    for (int i = 1; i <= LIMIT_MOV_BISPO; i++) {
        printf("Cima, ");
        for (int j = 1; j <= 1; j++) {
            printf("Direita.\n");
        }
    }

    return 0;
}
