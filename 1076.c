#include <stdio.h>
int main()
{
	char c, count = 'a';
	scanf("%c", &c);
	do {
		printf("%c\n", count);
		count++;
	} while (count != c+1);
	return 0;
}