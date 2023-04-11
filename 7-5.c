#include <stdio.h>

void main()
{
	int a = 100;

	while ( a == 200 );
	{
		printf("while 문 내부에 들어 있습니다.\n");
	}
	do{
		printf("do ~ while문 내부에 들어있습니다.\n");
	}while ( a == 200 );
}
