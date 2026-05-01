#include <stdio.h>

int main()
{
    char jogador1, jogador2;
    
    printf(" R(rock), P(paper) e S(scissor)\n");
    
    printf("Jogador 1: \n");
    scanf(" %c", &jogador1);
    printf("Jogador 2: \n");
    scanf(" %c", &jogador2);
    
    if(jogador1 == jogador2){
        
        printf("Empate");
        return 0;
    } 
    else if(
        
        (jogador1 == 'R' && jogador2 == 'S')||
        (jogador1 == 'P' && jogador2 == 'R')||
        (jogador1 == 'S' && jogador2 == 'P')){
            
        printf("Jogador 1 venceu");
        
    }
    else if(
        
        (jogador2 == 'R' && jogador1 == 'S')||
        (jogador2 == 'P' && jogador1 == 'R')||
        (jogador2 == 'S' && jogador1 == 'P')){
            
        printf("Jogador 2 venceu");    
    }
    else{
        
        printf("jogada inválida");
        
    }

    return 0;
}