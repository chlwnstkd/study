#include <stdio.h>

void gugu(int a)
{
	for(int i = 1; i < 10; i++)
	{
		printf("%2dX%2d=%2d\n",a, i, a*i);

	}
}
void main()
{
	int a;
	printf("몇단을 출력할까요?");
	scanf("%d",&a);

	gugu(a);
}
