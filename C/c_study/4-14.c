#include <stdio.h>
void main()
{
	int a;

	printf("�⵵�� �Է��ϼ���. : ");
	scanf("%d", &a);

	if (a % 4 == 0){
		if (a % 400 == 0) {
			printf("%d ���� �����Դϴ�.", a);
		}
		else if (a % 100 == 0) {
			printf("%d ���� ������ �ƴմϴ�.", a);
		}
		else {
			printf("%d ���� �����Դϴ�.", a);
	
		}
	}else {
		printf("%d ���� ������ �ƴմϴ�.", a);
	}
}
	
