#include <stdio.h>
int main()
{
	int x = 1, y = 1;
	int a[10][10] = { 0, };
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			scanf("%d", &a[i][j]);
	while (1) {
		if (a[x][y] == 0) {
			a[x][y] = 9;
			if (a[x][y + 1] == 0)
				++y;
			else if (a[x][y + 1] == 2) {
				a[x][y + 1] = 9;
				break;
			}
			else if (a[x + 1][y] == 0)
				++x;
			else if (a[x + 1][y] == 2) {
				a[x + 1][y] = 9;
				break;
			}
		}
		else if (a[x][y] == 2) {
			a[x][y] = 9;
			break;
		}
		else if (x == 8 && y == 8) {
			a[x][y] = 9;
			break;
		}
		else {
			a[x][y] = 9;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}