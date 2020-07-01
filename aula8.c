#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 10;
	if(a > 5 && a < 15)
	{
		printf("A variavel A está entre 5 e 15 \n");
	}
	if(a > 5 || a > 15)
	{
		printf("A variavel A é maior que 5 ou é maior que 15 \n");
	}
	if((a > 5 && a < 15) || a == 20)
        {
                printf("A variavel A é maior que 5 ou é maior que 15 ou senão é igual a 20\n");
        }
}
