#include <stdio.h>


int main()
{
  int ap1, ap2, ap3, premio, soma=0;
  float p1, p2, p3;
  
  printf("aposta do primeiro: \n");
  scanf("%d", &ap1);
  printf("aposta do segundo: \n");
  scanf("%d", &ap2);
  printf("aposta do terceiro: \n");
  scanf("%d", &ap3);
  printf("Prêmio: \n");
  scanf("%d", &premio);
  
  soma = ap1+ap2+ap3;
  
  p1 = (premio*ap1)/soma;
  p2 = (premio*ap2)/soma;
  p3 = (premio*ap3)/soma;
  
  
  printf("Cada um ganhará: %f\n %f\n %f\n", p1, p2, p3);
    
    return 0;
}