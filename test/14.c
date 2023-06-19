#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	if (argc != 3)
	{
		printf("매개변수를 2개 입력하세요");
		return;
	}

	FILE* rfp;
	FILE* wfp;

	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2], "w");

	while(1)
	{
		fgets(str, 199, rfp);
		if(feof(rfp))
		{
			break;
		}
		fputs(str, wfp);
	}
	fclose(rfp);
	fclose(wfp);
}

