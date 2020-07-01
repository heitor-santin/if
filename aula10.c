#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 1;
	int b = 10;
	while(a < 10)
	{
		printf("\n%d\n", a);
		a++;
	}
	do
	{
		printf("\n%d\n", b);
		b--;
	}while(b > 0);
}
