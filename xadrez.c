#include <stdio.h>

//NIVEL MESTRE - DESAFIOS:
//Movimentações - Rainha e Torre com funções recursivas simples
//Movimentações - Bispo recursiva com loops aninhados
//Movimentações - Cavalo loop com variáveis e condições múltiplas + uso de continue e break.


//BISPO  
void bispo_recursiva(int x) {
    for (int a = 1; a <= 5; a++) { //
        printf("Cima, "); 
        for (int b = 1; b <= 1; b++) { 
            printf("Direita\n");
        } 
    } //após a primeira execução, 'b <= 1' é falsa, encerra-se o loop interno para executar o externo ate que 'a <= 5' seja falsa
}
//TORRE
void torre_recursiva(int y) {
    if (y <= 5) {
        printf("Direita\n");
        torre_recursiva(y + 1);
    }
}
//RAINHA
void rainha_recursiva(int z) {
    if (z <= 8) {
        printf("Esquerda\n");
        rainha_recursiva(z + 1);
    }
}

int main() {        
    //BISPO
    printf("Movimentação Bispo\n");
    int bispo = 1; 
    bispo_recursiva(bispo); //chamando a recursiva correspondente

    //TORRE
    printf("Movimentação Torre\n");
    int torre = 1; 
    torre_recursiva(torre); //chamando a recursiva correspondente

    //RAINHA
    printf("Movimentação Rainha\n");
    int rainha = 1; 
    rainha_recursiva(rainha); //chamando a recursiva correspondente

    //CAVALO 
    printf("Movimentação Cavalo\n");
    int cavalo_vertical, cavalo_horizontal;
    for (cavalo_vertical = 1, cavalo_horizontal = 1;
        cavalo_vertical <= 3 && cavalo_horizontal <= 3; // as duas precisam ser verdade
        cavalo_vertical++, cavalo_horizontal++) {
        if (cavalo_vertical <= 2) {
            printf("Cima\n");
            continue; //garante que o restante do loop não seja executado até q 'cavalo_vertical <= 2' seja falsa
        }
        //essa parte do loop só é alcançada na terceira iteraçãoquando 'cavalo_vertical' e 'cavalo_horizontal' = 3
        printf("Direita\n");
        break; //garante que o loop não continue mesmo se 'cavalo_vertical <= 3 && cavalo_horizontal <= 3' for verdadeira
    }   
    return 0;
}
