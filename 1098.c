#include <stdio.h>
int main()
{
	int h, w, n, l, d, x, y;
	int a[100][100] = { 0, };
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0) {
			for (int j = 0; j < l; j++) {
				a[x - 1][y - 1] = 1;
				y++;
			}
		}
		else {
			for (int j = 0; j < l; j++) {
				a[x - 1][y - 1] = 1;
				x++;
			}
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}