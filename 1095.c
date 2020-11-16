#include <stdio.h>
int main()
{
	int n, count, min;
	int a[10000] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min)
			min = a[i];
	}
	printf("%d\n", min);
	return 0;
}