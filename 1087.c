#include <stdio.h>
int main()
{
	int num, i = 1, sum = 0;
	scanf("%d", &num);
	while (sum < num) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}