#include <stdio.h>
int main()
{
	int a, m, d, n;
	long long int result;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	result = a;
	for (int i = 1; i <= n - 1; i++)
		result = result * m + d;
	printf("%lld\n", result);
	return 0;
}