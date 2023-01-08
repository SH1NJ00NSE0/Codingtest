#include <stdio.h>

int main()
{
	int n, m, i, sum = 0;
	scanf("%d %d", &n, &m);
	for (i = m; i <= n; i += m)
		sum += i;
	printf("%d", sum);
	return 0;
}