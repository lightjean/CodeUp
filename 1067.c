#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num > 0)
		if (num % 2 == 0)
			printf("plus\neven\n");
		else
			printf("plus\nodd\n");
	else if (num % 2 == 0)
		printf("minus\neven\n");
	else
		printf("minus\nodd\n");
	return 0;
}