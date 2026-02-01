#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int a = 0;
    int i = 0;
    int movimentoCompleto = 1;

    // Implementação de Movimentação do Bispo
    // Movendo o Bispo 5 casas na diagonal para cima e à direita
    while (a < 5) {
        printf("Direita + Cima\n"); // imprime a direção do movimento
        a++;
    }
    
    // Implementação de Movimentação da Torre
    // Movendo a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // imprime a direção do movimento
    }

    // Implementação de Movimentação da Rainha
    // Movendo a Rainha 8 casas para a esquerda
    do {
        printf("Esquerda\n"); // imprime a direção do movimento
        i++;
    } while (i < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Movendo o Cavalo 2 casas para baixo e 1 casa para esquerda
    while (movimentoCompleto--) {
        for(int i = 0; i < 2; i++) {
            printf("Baixo\n"); //imprime "baixo" duas vezes
        }
        printf("Esquerda\n"); //imprime "esquerda" uma vez
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    return 0;

}
