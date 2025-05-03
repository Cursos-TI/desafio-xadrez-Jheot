#include <stdio.h>

void MovTorre (int movimentos){
    if (movimentos > 0) {
        printf("Direita\n");
        MovTorre(movimentos - 1);
    }
}
    

void MovBispo (int movimentos){
    if(movimentos > 0){
        printf("Cima, direita\n");
        MovBispo(movimentos - 1);
    }
}

void MovRainha (int movimentos){
    if(movimentos > 0){
        printf("Esquerda\n");
        MovRainha(movimentos - 1);
    }
}

void MovCavalo (int movimentos){
    if(movimentos > 0 && movimentos == 3){
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        
    }
}

int main() {
    // Simulação do movimento da Torre
    printf("Movimento da Torre:\n");
    MovTorre(5);
    printf("\n");
   
    // Simulação do movimento do Bispo
    printf("Movimento do Bispo:\n");
    MovBispo(5);
    printf("\n");
    
    // Simulação do movimento da Rainha
    printf("Movimento da Rainha\n");
    MovRainha(8);
    printf("\n");

    // Simulação do movimento do Cavalo 
    printf("Movimento do Cavalo\n");
    MovCavalo(3);
    printf("\n");
    
   
   //Simulando moviemento do cavalo

    /*for (int l = 1; l < cavalo_movimento; l++){
        while (l < cavalo_movimento){
            printf("Baixo\n");
            l++;
        }
        printf("Esquerda\n");
      
    }*/

    return 0;
}