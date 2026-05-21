#include <stdio.h>

    int main(){

    int tabuleiro[10][10];
    int tamanhoNavio = 3;
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

/// navios
    int linhaH = 2;
    int colunaH = 4;

    int linhaV = 5;
    int colunaV = 1;

     for(int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];

     }

     for (int v = 0; v < tamanhoNavio; v++) {
        tabuleiro[linhaV + v][colunaV] = navioVertical[v];
     }

     printf("\nTABULEIRO BATALHA NAVAL\n");
     for(int linha = 0; linha < 10; linha++){
         for (int coluna = 0; coluna < 10; coluna++) {
            printf(" %d", tabuleiro[linha][coluna]); 
        }
        printf("\n");
         }
}