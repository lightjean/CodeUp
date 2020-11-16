#include <stdio.h>
int main()
{
	int n, count;
	int a[24] = { 0, };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &count);
		a[count] += 1;
	}
	for (int i = 1; i <= 23; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}