/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1003.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 20:12:39 by kwon              #+#    #+#             */
/*   Updated: 2020/09/12 20:29:21 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//피보나치 함수

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    int *fb;
    int cnt[41]={
        0,
        1,
        0,
    };
    int i;

    scanf("%d",&n);
    fb = (int *)malloc(sizeof(int)*n);

    i = 0;
    while(i<n)
    {
        scanf("%d",&fb[i]);
        i++;
    }

    i = 2;
    while(i<=40)
    {
        cnt[i] = cnt[i-1] + cnt[i-2];
        i++;
    }

    i = 0;
    while(i<n)
    {
        if(fb[i] == 0)
            printf("1 0\n");
        else if(fb[i] == 1)
            printf("0 1\n");
        else
            printf("%d %d\n",cnt[fb[i]-1],cnt[fb[i]]);
        i++;
    }
    return (0);
}

/*
int count_zero[41];
int count_one[41];

int count_fibo(int n)
{
    count_zero[0] = 1;
    count_one[0] = 0;

    count_zero[1] = 0;
    count_one[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        count_zero[i] = count_zero[i - 1] + count_zero[i - 2];
        count_one[i] = count_one[i - 1] + count_one[i - 2];
    }  
}

int main(void)
{
    // 테스트 케이스의 갯수
    int n;
    scanf("%d", &n);

    count_fibo(40);

    // 재귀함수로 풀었을때 0, 1의 호출수를 출력
    for(int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%d %d\n",count_zero[num], count_one[num]);   
    }
}
*/