#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input[100];
	FILE* fp;
	int i;
	
	//fopen
	fp = fopen("sample.txt", "w");
	
	//input ouput
	for(i=0; i<3; i++) {
		printf("input a word: ");
		scanf("%s", input);
		fprintf(fp, "%s\n", input);
	}
	
	//fclose
	fclose(fp);	
	
	system("PAUSE");
	return 0;
}

