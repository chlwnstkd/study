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
	printf("����� ����ұ��?");
	scanf("%d",&a);

	gugu(a);
}