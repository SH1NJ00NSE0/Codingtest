#include <stdio.h>

int main()
{
	int a, b, i, sum = 0;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
		sum += i;
		printf("%d ", i);
		if (i != b)
			printf("+ ");
		else
			printf("= ");
	}
	printf("%d", sum);
	return 0;
}