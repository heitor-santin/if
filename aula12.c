#include <stdlib.h>
#include <stdio.h>

void main()
{
	int opcao;
	while(opcao < 1 || opcao > 3)
	{
		printf("Escolha uma opção: \n1 \n2 \n3 \n");
		scanf("%d", &opcao);

		switch(opcao)
		{
			case 1:
				printf("opção 1\n");
				break;
			case 2:
                                printf("opção 2\n");
				break;
			case 3:
                                printf("opção 3\n");
				break;
		}
	}
}
