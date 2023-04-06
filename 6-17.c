#include <stdio.h>

void main()
{
	for ( int i = 2; i < 10; i++)
	{
		printf(" #Á¦%d´Ü#", i);
	}
	printf("\n\n");
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			printf("%2dX%2d=%2d",j,i,i*j);
		}
		printf("\n");
	}
}
	

