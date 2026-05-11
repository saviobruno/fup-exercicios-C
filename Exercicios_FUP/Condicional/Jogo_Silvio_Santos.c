#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float valor[n];
    float chute[n];
    char escolha[n];

    int primeiro = 0, segundo = 0;

     
    for(int i = 0; i < n; i++) {
        scanf("%f", &valor[i]);
    }

    
    for(int i = 0; i < n; i++) {
        scanf("%f", &chute[i]);
    }

     for(int i = 0; i < n; i++) {
        scanf(" %c", &escolha[i]);
    }

    for(int i = 0; i < n; i++) {

      
        if(chute[i] == valor[i]) {
            primeiro++;
        }

        
        else if(escolha[i] == 'M') {

            if(valor[i] > chute[i]) {
                segundo++;
            } else {
                primeiro++;
            }
        }

        
        else if(escolha[i] == 'm') {

            if(valor[i] < chute[i]) {
                segundo++;
            } else {
                primeiro++;
            }
        }
    }

    if(primeiro > segundo) {
        printf("primeiro\n");
    }
    else if(segundo > primeiro) {
        printf("segundo\n");
    }
    else {
        printf("empate\n");
    }

    return 0;
}