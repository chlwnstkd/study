#include <stdio.h>

void main()
{
	int gugu[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gugu[i][j] = (i+1) * (j+1);
		}
	}
	
	for(int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			printf("%2dX%2d=%2d \t", j, i, gugu[j-1][i-1]);
		}
		printf("\n");
	}
}
