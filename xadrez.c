#include <stdio.h>

// Desafio de Xadrez - MateCheck
// NIVEL MESTRE

// Implementação de Movimentação do BISPO
// Usando Recursividade e loops aninhados
void moverBispo(int casas) {
    if (casas > 0) {
        for (int v = 0; v < 1; v++) { // Loop externo → movimento vertical
            for (int h = 0; h < 1; h++) { // Loop interno → movimento horizontal
                printf("Cima + Direita\n");
            }
        }
        moverBispo(casas - 1); // Chamada recursiva
    }
}
    
// Implementação de Movimentação da TORRE
// Usando Recursividade
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva
    }
}

// Implementação de Movimentação da RAINHA
// Usando Recursividade
void moverRainha(int casas1) {
    if (casas1 > 0) {
        printf("Esquerda\n");
        moverRainha(casas1 - 1); // Chamada recursiva
    }
}



int main(void) {
    moverBispo(5);
    moverTorre(5);
    moverRainha(8);

// Implementação de Movimentação do CAVALO
// Usando Loops Complexos
    int movimentos = 1; // quantidade de movimentos do cavalo
    
    while (movimentos--) {

        for (int passo = 0; passo < 3; passo++) {

            if (passo < 2) {
                printf("Cima\n");   // duas casas para cima
                continue;
            }

            if (passo == 2) {
                printf("Direita\n"); // uma casa para a direita
                break;
            }
        }
    }

    return 0;
}


