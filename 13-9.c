#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};
	
	int n;
	printf("�Է��� �л� �� : ");
	scanf("%d",&n);

	struct student s;
	struct student* p = (struct student*) malloc(sizeof(struct student) * n);

	*p = s;
	for(int i = 0; i < n; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", (p + i)->name, &(p + i)->age);
	}
	
	printf("\n\n-- �л� ��� --\n");
	for(int i = 0; i < n; i++)
	{
		printf("�л�:%s , ����:%d\n", (p + i)->name, (p + i)->age);
	}
}

