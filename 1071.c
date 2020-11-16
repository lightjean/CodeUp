#include <stdio.h>
int main()
{
	int num;
goback:
	scanf("%d", &num);
	if (num == 0)
		return 0;
	printf("%d\n", num);
	if (num != 0)
		goto goback;
	return 0;
}