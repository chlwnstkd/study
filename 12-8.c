#include <stdio.h>
#include <malloc.h>

void main()
{
	int n;
	int hap = 0;
	int* p;
	printf(" �Է��� ������ ? ");
	scanf("%d", &n);
	p = (int*) malloc(sizeof(int) * n);

	for(int i = 0; i<n; i++)
	{
		printf(" %d ��° ���� : ", i+1);
		scanf("%d", p+i);
	}
	for(int i = 0 ; i<n; i++)
	{
		if(*(p+i) % 2 == 0)
		{
			hap += *(p+i);
		}
	}
	printf("�Է��� ¦���� ==> %d", hap);
}