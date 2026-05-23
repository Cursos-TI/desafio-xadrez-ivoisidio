#include <stdio.h>

int main() {
    
    printf("=== SIMULACAO DE MOVIMENTOS DE XADREZ ===\n\n");

    // ==================== TORRE ====================
    // Utilizando FOR - Movimento horizontal 5 casas para a direita
    printf("TORRE (For): Movendo 5 casas para a direita\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
    
    printf("\n");

    // ==================== BISPO ====================
    // Utilizando WHILE - Movimento diagonal 5 casas (Cima + Direita)
    printf("BISPO (While): Movendo 5 casas na diagonal (Cima e Direita)\n");
    
    int passo = 1;
    while(passo <= 5) {
        printf("Casa %d: Cima, Direita\n", passo);
        passo++;
    }
    
    printf("\n");

    // ==================== RAINHA ====================
    // Utilizando DO-WHILE - Movimento 8 casas para a esquerda
    printf("RAINHA (Do-While): Movendo 8 casas para a esquerda\n");
    
    int casas = 1;
    do {
        printf("Casa %d: Esquerda\n", casas);
        casas++;
    } while(casas <= 8);
    
    printf("\n");
    printf("=== FIM DA SIMULACAO ===\n");

    return 0;
}