#include <stdio.h>
#include <malloc.h>

void main()
{
	int n;
	int hap = 0;
	int* p;
	printf(" 입력할 개수는 ? ");
	scanf("%d", &n);
	p = (int*) malloc(sizeof(int) * n);

	for(int i = 0; i<n; i++)
	{
		printf(" %d 번째 숫자 : ", i+1);
		scanf("%d", p+i);
	}
	for(int i = 0 ; i<n; i++)
	{
		if(*(p+i) % 2 == 0)
		{
			hap += *(p+i);
		}
	}
	printf("입력한 짝수합 ==> %d", hap);
}
