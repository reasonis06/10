#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input[100];
	FILE* fp;
	char c;
	
	//fopen
	fp = fopen("sample.txt", "r");
	if(fp == NULL) {
		printf("Failed to open file!\n");
		return -1;
	}
	
	//read char one by one
	while((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	
	#if 0
	//read word one by one
	while(fgets(input, 100, fp) != 0) {
		printf("%s", input);
	}
	#endif
	
	//fclose
	fclose(fp);	
	
	system("PAUSE");
	return 0;
}

