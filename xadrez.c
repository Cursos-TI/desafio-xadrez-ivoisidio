#include <stdio.h>

// ==================== FUNÇÕES RECURSIVAS ====================

// Torre - Recursiva
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Casa %d: Direita\n", 6 - casas);  // Para numerar de 1 a 5
    moverTorre(casas - 1);
}

// Bispo - Recursiva (Cima e Direita)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Casa %d: Cima, Direita\n", 6 - casas);
    moverBispo(casas - 1);
}

// Rainha - Recursiva
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Casa %d: Esquerda\n", 9 - casas);
    moverRainha(casas - 1);
}

int main() {
    
    printf("=== SIMULACAO DE MOVIMENTOS DE XADREZ ===\n\n");

    // ==================== TORRE (Recursividade) ====================
    printf("TORRE (Recursivo): Movendo 5 casas para a direita\n");
    moverTorre(5);
    printf("\n");

    // ==================== BISPO (Recursividade + Loops Aninhados) ====================
    printf("BISPO (Recursivo): Movendo 5 casas na diagonal (Cima e Direita)\n");
    moverBispo(5);
    
    printf("\nBISPO (Loops Aninhados):\n");
    // Loop externo: movimento vertical (Cima)
    for(int vertical = 1; vertical <= 5; vertical++) {
        // Loop interno: movimento horizontal (Direita)
        int horizontal = 1;
        while(horizontal <= 1) {
            printf("Casa %d: Cima, Direita\n", vertical);
            horizontal++;
        }
    }
    printf("\n");

    // ==================== RAINHA (Recursividade) ====================
    printf("RAINHA (Recursivo): Movendo 8 casas para a esquerda\n");
    moverRainha(8);
    printf("\n");

    // ==================== CAVALO (Loops Aninhados - 2 Cima + 1 Direita) ====================
    printf("CAVALO (Loops Aninhados): Movendo em L (2 Cima + 1 Direita)\n");
    
    // Loop externo: 2 casas para cima
    for(int vertical = 1; vertical <= 2; vertical++) {
        printf("Casa %d: Cima\n", vertical);
    }
    
    // Loop interno: 1 casa para a direita
    int horizontal = 1;
    while(horizontal <= 1) {
        printf("Casa %d: Direita\n", 3);
        horizontal++;
    }
    
    printf("\n");
    printf("=== FIM DA SIMULACAO ===\n");

    return 0;
}