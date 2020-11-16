#include <stdio.h>
int main()
{
	int w, h, b;
	double result;
	scanf("%d %d %d", &w, &h, &b);
	result = ((double)w * h * b) / 8388608;
	printf("%.2lf MB\n", result);
	return 0;
}