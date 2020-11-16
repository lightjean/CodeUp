#include <stdio.h>
int main()
{
	char num[15];
	scanf("%s", num);
	printf("%c%c%c%c%c%c", num[0], num[1], num[2], num[3], num[4], num[5]);
	printf("%c%c%c%c%c%c%c\n", num[7], num[8], num[9], num[10], num[11], num[12], num[13]);
	return 0;
}