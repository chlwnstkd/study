#include <stdio.h>

void main()
{
	int a, b, *p1, *p2;

	printf("a�� �Է� : ");
	scanf("%d", &a);

	printf("b�� �Է� : ");
	scanf("%d", &b);

	printf("a�� : %d, b�� : %d\n", a, b);

	printf("�� ��ȯ\n");

	p1 = &a;
	p2 = &b;

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("a�� : %d, b�� : %d", a, b);
}