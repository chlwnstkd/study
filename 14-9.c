#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	wfp = fopen(argv[2],"w");
	if ( argc != 3)
	{
		printf("\n -- 매개 변수를 2개 사용하세요 --\n");
		return;
	}

	rfp = fopen(argv[1], "r");

	for( ;; )
	{
		fgets(str, 19, rfp);

		if(feof(rfp))
			break;

		fputs(str, wfp);

	}
	fclose(rfp);
	fclose(wfp);
}
	


