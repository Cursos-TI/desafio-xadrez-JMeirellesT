#include <stdio.h>

int main() {

    int casasTorre = 5;
    int i;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");
    
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    int j;

    printf("Movimento do Cavalo:\n");

    for (j = 1; j <= movimentosVerticais; j++) {
        printf("Baixo\n");
    }

    int contadorCavalo = 1;
    while (contadorCavalo <= movimentosHorizontais) {
        printf("Esquerda\n");
        contadorCavalo++;
    }

    return 0;
}
