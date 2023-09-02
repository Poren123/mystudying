#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int c;
	scanf("%d %d", &c);
	int min;
	min = b + c;

	if (min >= 60)
	{
		a = a + (min / 60);
		b = (min % 60);

	}
	if (a >= 24)
	{
		a = (a % 24);
	}
	if (min < 60)
	{
		b = min;
	}

	printf("%d %d", a, b);

	return 0;
}