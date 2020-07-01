#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	srand((unsigned)time(NULL));
	int aleatorio = (rand() % 9) + 1;
	printf("%d \n", aleatorio);
}
