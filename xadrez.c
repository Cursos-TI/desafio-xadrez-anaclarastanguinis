#include <stdio.h>

int main() {
    //Nível Novato - Movimentação das Peças
    int mov_bispo = 1; //5 casas na diagonal superior direita
    int mov_torre = 1; //5 casas para a direita
    int mov_rainha; //8 casas para a esquerda
    int mov_cavalo; //2 casas para baixo e 1 para a esquerda
        
    //Bispo
    printf("Movimentação Bispo\n");
    while (mov_bispo <= 5) {
        printf("Cima, Direita\n"); 
        mov_bispo++; 
    }

    //Torre
    printf("Movimentação Torre\n");
    do {
        printf("Direita\n");
        mov_torre++;
    } while (mov_torre <= 5);

    //Rainha
    printf("Movimentação Rainha\n");
    for (mov_rainha = 1; mov_rainha <= 8; mov_rainha++) {
        printf("Esquerda\n");
    }

    //Nível Aventureiro - Movimentação do Cavalo
    //Cavalo
    
    printf("Movimentação Cavalo\n");
    for (mov_cavalo = 1; mov_cavalo <= 2; mov_cavalo++) {
        while (mov_cavalo <= 2) {
            printf("Baixo\n");
            mov_cavalo++;
        }
        printf("Esquerda\n");
    }
   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
