#include <stdio.h>

int main() {
    
    printf("=== SIMULACAO DE MOVIMENTOS DE XADREZ ===\n\n");

    // ==================== TORRE ====================
    printf("TORRE (For): Movendo 5 casas para a direita\n");
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
    
    printf("\n");

    // ==================== BISPO ====================
    printf("BISPO (While): Movendo 5 casas na diagonal (Cima e Direita)\n");
    int passo = 1;
    while(passo <= 5) {
        printf("Casa %d: Cima, Direita\n", passo);
        passo++;
    }
    
    printf("\n");

    // ==================== RAINHA ====================
    printf("RAINHA (Do-While): Movendo 8 casas para a esquerda\n");
    int casas = 1;
    do {
        printf("Casa %d: Esquerda\n", casas);
        casas++;
    } while(casas <= 8);
    
    printf("\n");

    // ==================== CAVALO ====================
    printf("CAVALO (For + While aninhados): Movendo em L (2 Baixo + 1 Esquerda)\n");
    
    // Loop externo: 2 casas para baixo
    for(int vertical = 1; vertical <= 2; vertical++) {
        printf("Casa %d: Baixo\n", vertical);
    }
    
    // Loop interno (aninhado): 1 casa para a esquerda
    int horizontal = 1;
    while(horizontal <= 1) {
        printf("Casa %d: Esquerda\n", 3);  // 3ª casa do movimento total
        horizontal++;
    }
    
    printf("\n");
    printf("=== FIM DA SIMULACAO ===\n");

    return 0;
}