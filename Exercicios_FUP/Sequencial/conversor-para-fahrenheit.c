#include <stdio.h>

int main()
{
    float celsius;
    double fahrenhait;
    
    printf("digite: \n");
    scanf("%f", &celsius);
    
    fahrenhait = (1.8*celsius)+32;
    
    printf("temperatura em fahrenhait: %lf",fahrenhait);
    return 0;
}