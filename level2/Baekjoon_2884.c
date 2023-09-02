#include <stdio.h>

int main(void) {
	int a, b;
	int min;
	int hour;
	scanf("%d %d", &a, &b);
	min = b - 45;

	if (min < 0)
	{
		a = a - 1;
		b = 60 - (-min);
		if (a < 0)
		{
			a = 23;
		}
	}
	if (min >= 0)
	{
		b = min;
	}
	printf("%d %d", a, b);
	return 0;
}