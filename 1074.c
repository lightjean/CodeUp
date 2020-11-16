#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	while (num != 0) {
		printf("%d\n", num);
		num--;
	}
	return 0;
}