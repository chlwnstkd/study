#include <stdio.h>
#include <malloc.h>

void main()
{
	int cnt;
	int *p;
	int hap = 0;

	printf("�Է��� ���� ������?");
	scanf("%d", &cnt);

	p = (int*) malloc(sizeof(int) * cnt);

	for(int i = 0; i < cnt; i++)
	{
		printf("%d��° ���� �Է��ϼ��� : ", i+1);
		scanf("%d",p+i);
	       if(*(p + i) % 2 == 0)
	       {
		       hap += *(p+i);
	       }
	}
	printf("�Է��� ¦���� : %d ", hap);
}
