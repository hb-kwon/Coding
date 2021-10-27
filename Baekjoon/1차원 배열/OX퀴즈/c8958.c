#include <stdio.h>

int main(void)
{
	int	n;
	char	str[80];
	int	i;
	int	j;
	int score;
	int sum;

	scanf("%d",&n);
	int res[n];
	i = -1;
	while (++i < n)
	{
		sum = 0;
		score = 1;
		scanf("%s",str);
		j = -1;
		while (str[++j])
		{
			if (str[j] == 'O')
			{	
				sum += score;
				score++;
			}
			else
				score = 1;
		}
		res[i] = sum;
	}
	i = -1;
	while (++i < n)
		printf("%d\n", res[i]);
	return (0);
}
