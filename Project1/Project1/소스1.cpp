#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max;
	max = a;
	if (b > max)
		b = max;
	if (c > max)
		c = max;
	if (d > max)
		d = max;
	return max;
}

int main()
{
	printf("max4(%d,%d,%d,%d) = %d", 1, 2, 3, 4, max4(1, 2, 3, 4));
	return 0;
}