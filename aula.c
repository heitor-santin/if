
#include <stdio.h>
#include <stdlib.h>

void main(){
        int numero, numero2;
        float virgula;
        char letra;

        scanf("%d", &numero);
        scanf("%f", &virgula);
        scanf(" %c", &letra);

        printf("\n numero = %d", numero);
        printf("\n virgula = %.1f", virgula);
        printf("\n palavra = %c", letra);
}

