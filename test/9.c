#include <stdio.h>

void main()
{
	int a, b, *p1, *p2;

	printf("a값 입력 : ");
	scanf("%d", &a);

	printf("b값 입력 : ");
	scanf("%d", &b);

	printf("a값 : %d, b값 : %d\n", a, b);

	printf("값 교환\n");

	p1 = &a;
	p2 = &b;

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("a값 : %d, b값 : %d", a, b);
}
