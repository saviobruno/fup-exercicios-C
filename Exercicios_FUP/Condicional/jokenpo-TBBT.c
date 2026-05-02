#include <stdio.h>

int main()
{
    char j1, j2;
    
    printf(" R(pedra), P(papel), T(tesoura), L(lagarto) ou S(spock)\n");
    
    printf("Jogador 1: \n");
    scanf(" %c", &j1);
    printf("Jogador 2: \n");
    scanf(" %c", &j2);
    
    if(j1 == j2){
        
        printf("Empate");
        return 0;
    } 
    else if(
        
        (j1 == 'T' && j2 == 'P') ||
        (j1 == 'P' && j2 == 'R') ||
        (j1 == 'R' && j2 == 'L') ||
        (j1 == 'L' && j2 == 'S') ||
        (j1 == 'S' && j2 == 'T') ||
        (j1 == 'T' && j2 == 'L') ||
        (j1 == 'L' && j2 == 'P') ||
        (j1 == 'P' && j2 == 'S') ||
        (j1 == 'S' && j2 == 'R') ||
        (j1 == 'R' && j2 == 'T')) {
            
        printf("Jogador 1 venceu");
        
    }
    else if(
        
        (j2 == 'T' && j1 == 'P') ||
        (j2 == 'P' && j1 == 'R') ||
        (j2 == 'R' && j1 == 'L') ||
        (j2 == 'L' && j1 == 'S') ||
        (j2 == 'S' && j1 == 'T') ||
        (j2 == 'T' && j1 == 'L') ||
        (j2 == 'L' && j1 == 'P') ||
        (j2 == 'P' && j1 == 'S') ||
        (j2 == 'S' && j1 == 'R') ||
        (j2 == 'R' && j1 == 'T')){
            
        printf("Jogador 2 venceu");    
    }
    else{
        
        printf("jogada inválida");
        
    }

    return 0;
}