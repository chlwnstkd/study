#include <stdio.h>

void main()
{
	int a, b, *p1, *p2, tmp;

	printf("a 값 입력 : ");
	scanf("%d", &a);

	printf("b 값 입력 : ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바귄 값 a는 %d, b는 %d", a, b);
}
