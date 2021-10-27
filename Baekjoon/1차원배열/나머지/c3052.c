#include <stdio.h>

int main(void)
{
	int arr[10];
	int res[42] = {0,};
	int i;
	int div;
	int cnt;

	i = -1;
	while (++i < 10)
	{
		scanf("%d",&arr[i]);
		res[arr[i]%42]++;
	}
	i = -1;
	cnt = 0;
	while (++i < 42)
	{
		if (res[i])
			cnt++;
	}
	printf("%d\n",cnt);
	return (0);
}
