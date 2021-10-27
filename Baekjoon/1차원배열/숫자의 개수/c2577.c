#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int mul;
	int arr[10] = {0,};
	int index;
	int i;

	scanf("%d %d %d",&a,&b,&c);
	mul = a*b*c;
	printf("mul : %d\n", mul);
	index = 0;
	while (mul > 0)
	{
		index = mul % 10;
		arr[index]++;
		mul /= 10;
	}
	i = -1;
	while (++i < 10)
		printf("%d\n", arr[i]);
	return (0);
}
