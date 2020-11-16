#include <stdio.h>
int main()
{
	int n, num;
	scanf("%d", &n);
reget:
	scanf("%d", &num);
	printf("%d\n", num);
	n--;
	if (n != 0)
		goto reget;
	return 0;
}