#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//-----------FUNÇÕES RECURSIVAS--------------
void moverTorre(int movimentos1, int atual1){
    if (atual1 >= movimentos1) return;        //Recursão
    printf("Cima\n");
    moverTorre(movimentos1, atual1 + 1);      //Chamada
}

void moverBispo(int verticais, int horizontais){
    for (int v = 0; v < verticais; v++){        //Bispo sobe
        printf("Cima\n");

        for (int h = 0; h < horizontais; h++){      //Bispo direita
            printf("Direita\n");
        }
    }
}

void moverRainha (int movimentos2, int atual2){
    if (atual2 >= movimentos2) return;
    printf("Diagonal Direita Cima\n");          //Rainha move-se livremente cima, diagonal, direita e esqeurda
    moverRainha(movimentos2, atual2 + 1);
}


//---------LOOP COMPLEXO + MOVIMENTAÇÃO DO CAVALO-----------

void moverCavaloComplex (){
    int movCima = 2;
    int movDireita = 1;

    printf("\nMovimentação do Cavalo \n");
    
    for (int i = 1; i <= movCima; i++) {
        printf("Cima\n");
        
        if (i == movCima) {
            int j = 0;
            while (j < movDireita) {
                printf("Direita\n");
                j++;
                
            if (j == movDireita) {
                    printf("(Fim do movimento do Cavalo)\n");
                    break; 
                }
            }
        }
    }
}


int main() {

   // Quantidade de movimentos de cada peça
    
    int movTorre = 3;
    int movRainha = 2;
    int movBispoVert = 2;
    int movBispoHorz = 2;
 
    // Implementação de Movimentação da Torre

    printf("\nMovimentação da Torre \n");
    moverTorre(movTorre, 0);

    // Implementação de Movimentação do Bispo
    
    printf("\nMovimentação do Bispo \n");
    moverBispo(movBispoVert, movBispoHorz);

   
    // Implementação de Movimentação da Rainha
    
    printf("\nMovimentação da Rainha \n");
    moverRainha(movRainha, 0);

    // Implementação do Movimentação do Cavalo

    moverCavaloComplex();


    return 0;
}
