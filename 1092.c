#include <stdio.h>
int main()
{
	int a, b, c, day = 1;
	scanf("%d %d %d", &a, &b, &c);
	while (1) {
		day++;
		if (day%a == 0 && day%b == 0 && day%c == 0)
			break;
	}
	printf("%d\n", day);
	return 0;
}