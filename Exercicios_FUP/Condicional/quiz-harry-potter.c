#include <stdio.h>

int main()
{
    char r1, r2, r3, r4;
    int acertos = 0;
    
    scanf(" %c", &r1);
    scanf(" %c", &r2);
    scanf(" %c", &r3);
    scanf(" %c", &r4);
    
    if(r1 == 'd' || r1 == 'D'){
        acertos++;
    }
    if(r2 == 'a' || r2 == 'A'){
        acertos++;
    }
    if(r3 == 'c' || r3 == 'C'){
        acertos++;
    }
    if(r4 == 'd' || r4 == 'D'){
        acertos++;
    }
    
    if(acertos == 0){
        printf("Nunca assistiu");
    }
    if(acertos == 1){
        printf("Já ouviu falar");
    }
    if(acertos == 2){
        printf("Interessado no assunto");
    }
    if(acertos == 3){
        printf("Fã");
    }
    if(acertos == 4){
        printf("Super Fã");
    }
    

    return 0;

}



/*
================ QUIZ: HARRY POTTER ================

1) Casa de Harry Potter:
   a) Hufflepuff
   b) Ravenclaw
   c) Slytherin
   d) Gryffindor (correta)

2) Nome verdadeiro de Voldemort:
   a) Tom Riddle (correta)
   b) Draco Malfoy
   c) Bellatrix Lestrange
   d) Pedro Pettigrew

3) NÃO é uma Relíquia da Morte:
   a) Varinha de sabugueiro
   b) Pedra da ressurreição
   c) Pedra filosofal (correta)
   d) Capa de invisibilidade

4) NÃO é maldição imperdoável:
   a) Crucio
   b) Imperio
   c) Avada Kedavra
   d) Expecto Patronum (correta)

====================================================
*/