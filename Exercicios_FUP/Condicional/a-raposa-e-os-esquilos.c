#include <stdio.h>

int main()
{
    int x,y,z;
    
    printf("Digite: \n");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("\n \n");
    
    if((x > y && x < z) || (x < y && x > z)){
        printf("%d\n", x);
        
    }else if((y > x && y < z) || (y < x && y > z)){
        printf("%d\n", y);
    }else{
        printf("%d\n", z);
    }

    return 0;
}