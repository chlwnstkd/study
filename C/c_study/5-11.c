#include <stdio.h>

void main()
{
	int a, b;
	char mark;

	printf("������ ���ٷ� ����� �Է��ϼ��� :");
	scanf("%d %c %d", &a, &mark, &b);

	switch (mark)
	{
		case '+' : printf("%d + %d = %d �Դϴ�. \n", a, b, a+b); break;
		case '-' : printf("%d - %d = %d �Դϴ�. \n", a, b, a-b); break;
		case '*' : printf("%d * %d = %d �Դϴ�. \n", a, b, a*b); break;
		case '/' : printf("%d / %d = %d �Դϴ�. \n", a, b, a/b); break;
		case '%' : printf("%d %% %d = %d �Դϴ�. \n", a, b, a%b); break;
		default  : printf("�����ڸ� �߸� �Է��߽��ϴ�. \n"); break;
	}
}