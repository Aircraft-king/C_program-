#include <stdio.h>

int a[600];
int Set(int n)
{
	if (a[n] > 0)
		return a[n];
	else
	{
		a[n] = 1;
		for (int i = 1; i <= n / 2; i++)
		{
			a[n] += Set(i);
		}
		return a[n];
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",Set(n));
	system("pause");
	return 0;
}


