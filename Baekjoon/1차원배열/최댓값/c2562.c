#include <stdio.h>

int main(void)
{
    int num[8];
    int max;
    int i;
	int index;

    i = -1;
    max = 0;
    while(++i < 9)
    {
        scanf("%d",&num[i]);
        if (max < num[i])
            max = num[i];
    }
	index = 0;
    while (max != num[index++])
		;
    printf("%d\n%d\n",max,index);
    return (0);
}
