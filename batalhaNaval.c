#include <stdio.h>

    int main(){

    int tabuleiro[10][10];
    int tamanhoNavio = 3;
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioDiagonal1[3] = {3, 3, 3};
    int navioDiagonal2[3] = {3, 3, 3};

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
    int linhaD1 = 0;
    int colunaD1 = 0;
    int linhaD2 = 7;
    int colunaD2 = 9;

    

     for(int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];

     }

     for (int v = 0; v < tamanhoNavio; v++) {
        tabuleiro[linhaV + v][colunaV] = navioVertical[v];
     }
     
     for (int d1 = 0; d1 < tamanhoNavio; d1++) {
        tabuleiro[linhaD1 + d1][colunaD1 + d1] = navioDiagonal1[d1];
     }

    for (int d2 = 0; d2 < tamanhoNavio; d2++) {
        tabuleiro[linhaD2 + d2][colunaD2 - d2] = navioDiagonal2[d2];
     }

     printf("\nTABULEIRO BATALHA NAVAL\n");
     for(int linha = 0; linha < 10; linha++){
         for (int coluna = 0; coluna < 10; coluna++) {
            printf(" %d", tabuleiro[linha][coluna]); 
        }
        printf("\n");
         }
}