#include <stdio.h>
#include <stdlib.h>

int main() {
	char nomeCompleto[20];

	printf("Qual o seu nome: ");
	gets(nomeCompleto);
	printf("Seu nome é: %s\n", nomeCompleto);
	return 0;
}
