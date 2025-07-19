#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

    // Movimento da Rainha
    for (int rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha - Esquerda \n");
    }
    
    // Movimento da Torre
    for (int torre = 0; torre < 8; torre++)
    {
        printf("Rainha - Direita \n");
    }

    // Movimento do Bispo
    for (int bispo = 0; bispo < 8; bispo++)
    {
        printf("Bispo - Cima, Direira \n");
    }

    // Movimento do Cavalo
    int movcavalo = 1; // controlando movimento em L
    
    while (movcavalo--)
    {
        for (int cavalo = 0; cavalo < 2; cavalo++)
        {
             printf("Cavalo - Cima \n"); //2x pra cima
        }
         printf("Cavalo - Direita"); //1x direita   
    }
        

    return 0;
}
