#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("copied string: %s\n", dst);
	
	system("PAUSE");
}

//return value X
