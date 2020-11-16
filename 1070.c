#include <stdio.h>
int main()
{
	int month;
	scanf("%d", &month);
	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("spring\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall\n");
		break;
	default:
		printf("winter\n");
	}
	return 0;
}