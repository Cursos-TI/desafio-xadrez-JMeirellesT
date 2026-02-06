#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    for (vertical = 1; vertical <= 1; vertical++) {

        for (horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}


void moverCavalo() {
    int i, j;

    printf("Movimento do Cavalo:\n");
    for (i = 1; i <= 2; i++) {

        
        for (j = 1; j <= 2; j++) {

            if (j > 1) {
                continue;
            }
            printf("Cima\n");
        }
    }
    for (i = 1; i <= 1; i++) {
        printf("Direita\n");
        break;
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    moverCavalo();

    return 0;
}
