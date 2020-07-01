#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char palavra[255];
	printf("Digite uma palavra: ");
	//limpa o buffer
	setbuf(stdin, 0);
	//lê a string
	fgets(palavra, 255, stdin);
	//limpa as casas não usadas
	palavra[strlen(palavra)-1] = '\0';

	printf("%s \n",palavra);
}
