#include <stdio.h>
int main()
{
	int hex;
	scanf("%X", &hex);
	for (int i = 1; i < 16; i++)
		printf("%X*%X=%X\n", hex, i, hex * i);
	return 0;
}