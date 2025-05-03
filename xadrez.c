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
    if(movimentos >0){
        printf("Esquerda\n")
        MovRainha(movimentos - 1);
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
    

    int rainha_movimento = 8;
    int cavalo_movimento = 3;
    
   
    printf("\n");

    // Simulação do movimento do Bispo
    
  
    printf("\n");

    // Simulação do movimento da Rainha
    
    printf("Movimento da Rainha:\n");
    int k = 0;
        
    do {
        printf("Esquerda\n");
        k++;
    } while (k < rainha_movimento);
    printf("\n");

    //Simulando moviemento do cavalo

    for (int l = 1; l < cavalo_movimento; l++){
        while (l < cavalo_movimento){
            printf("Baixo\n");
            l++;
        }
        printf("Esquerda\n");
      
    }

    return 0;
}