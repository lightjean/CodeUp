#include <stdio.h>
int main()
{
	int a, r, n, result;
	scanf("%d %d %d", &a, &r, &n);
	result = a;
	for (int i = 1; i <= n - 1; i++)
		result *= r;
	printf("%d\n", result);
	return 0;
}