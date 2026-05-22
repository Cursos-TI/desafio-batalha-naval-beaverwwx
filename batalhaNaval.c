#include <stdio.h>


    int main(){

    int tabuleiro[10][10];
    

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

/// figuras
    int cruz[5][5];
    for (int cLinha = 0; cLinha < 5; cLinha++) {
        for(int cColuna = 0; cColuna < 5; cColuna++) {
        if (cColuna == 2 || cLinha == 2){
           cruz[cLinha][cColuna] = 1;
        } else {
           cruz[cLinha][cColuna] = 0;
        }
    }
    }

    int origemLinha = 2;
    int origemColuna = 2;
    int linhaTabuleiro, colunaTabuleiro;

    for (int cLinha = 0; cLinha < 5; cLinha++) {
        for (int cColuna = 0; cColuna < 5; cColuna++) {
            if (cruz[cLinha][cColuna] == 1 ) {
            linhaTabuleiro = origemLinha + cLinha - 2;
            colunaTabuleiro = origemColuna + cColuna - 2;
            tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
            } 
        }
    }

    int cone[5][5];
    for (int dLinha = 0; dLinha < 5; dLinha++) {
        for(int dColuna = 0; dColuna < 5; dColuna++) {
            if(dLinha == 0 && dColuna == 2 || dLinha == 1 && dColuna >= 1 && dColuna <= 3 || dLinha == 2) {
             cone[dLinha][dColuna] = 1; 
            } else {
             cone[dLinha][dColuna] = 0;
            }
        }
    }
    
    int origemLinha2 = 3;
    int origemColuna2 = 7;

    for (int dLinha = 0; dLinha < 5; dLinha++) {
        for (int dColuna = 0; dColuna < 5; dColuna++) {
            if (cone[dLinha][dColuna] == 1 ) {
            linhaTabuleiro = origemLinha2 + dLinha - 2;
            colunaTabuleiro = origemColuna2 + dColuna - 2;
            tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
            } 
        }
    }

    int octaedro[5][5];
    int origemLinha3 = 7;
    int origemColuna3 = 4;
    for(int oLinha = 0; oLinha < 5; oLinha++) {
    for (int oColuna = 0; oColuna < 5; oColuna++) {
        if (oLinha == 0 && oColuna == 2 || oLinha == 1 && oColuna >= 1 && oColuna <= 3 || oLinha == 2 || oLinha == 3 && oColuna >= 1 && oColuna <= 3 || oLinha == 4 && oColuna == 2) {
            octaedro[oLinha][oColuna] = 1;
        } else {
            octaedro[oLinha][oColuna] = 0;
        }
       }
    }

    for (int oLinha = 0; oLinha < 5; oLinha++) {
        for(int oColuna = 0; oColuna < 5; oColuna++) {
            if(octaedro[oLinha][oColuna] == 1){
                linhaTabuleiro = origemLinha3 + oLinha - 2;
                colunaTabuleiro = origemColuna3 + oColuna - 2;
                tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
            }
        }
    }


     printf("\nTABULEIRO BATALHA NAVAL\n");
     for (int cLinha = 0; cLinha < 10; cLinha++) {
        for(int cColuna = 0; cColuna < 10; cColuna++) {
            printf(" %d", tabuleiro[cLinha][cColuna]); 
        }
        printf("\n");
         }
}