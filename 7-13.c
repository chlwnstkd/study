#include <stdio.h>
void main()
{
	int a, b, c;
	int hap=0;
	printf("�հ��� ���۰� ==> ");
	scanf("%d",&a);
	printf("�հ��� ���� ==> ");
	scanf("%d",&b);
	printf("��� ==> ");
	scanf("%d",&c);
	
	for (int i = a; i < b+1; i++) {
		if (i % c != 0)
			continue;
		hap += i;
	}
	printf("%d���� %d������ %d����� �հ� ==> %d ",a, b, c, hap);
}
