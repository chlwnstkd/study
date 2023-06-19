#include <stdio.h>
#include <malloc.h>

void main()
{
	int cnt;
	int *p;
	int hap = 0;

	printf("입력할 수의 개수는?");
	scanf("%d", &cnt);

	p = (int*) malloc(sizeof(int) * cnt);

	for(int i = 0; i < cnt; i++)
	{
		printf("%d번째 수를 입력하세요 : ", i+1);
		scanf("%d",p+i);
	       if(*(p + i) % 2 == 0)
	       {
		       hap += *(p+i);
	       }
	}
	printf("입력한 짝수합 : %d ", hap);
}
