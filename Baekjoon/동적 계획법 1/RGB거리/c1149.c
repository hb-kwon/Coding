/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1149.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:12:41 by kwon              #+#    #+#             */
/*   Updated: 2020/09/13 19:55:53 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//RGB거리
//arr[n][m] -> n = 집의 수, m=0(red), 1(green), 2(blue)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int min(int a, int b)
{
    return a > b ? b : a;
}

int main(void)
{
    int n;
    int i;
    int cost[1001][3];
    int house[1001][3];

    scanf("%d",&n);

    i = 0;
    while(i<n)
    {
        scanf("%d%d%d",&house[i][0],&house[i][1],&house[i][2]);
        i++;
    }

    cost[0][0] = house[0][0];
    cost[0][1] = house[0][1]; 
    cost[0][2] = house[0][2]; 

    i = 1;
    while(i<n)
    {
        cost[i][0] = house[i][0] + min(cost[i-1][1], cost[i-1][2]);
        cost[i][1] = house[i][1] + min(cost[i-1][0], cost[i-1][2]);
        cost[i][2] = house[i][2] + min(cost[i-1][0], cost[i-1][1]);
        i++;
    }
    printf("%d\n",min(cost[n-1][0],min(cost[n-1][1],cost[n-1][2])));
    return (0);
}
/*
다음의 조건을 만족하기위해 i번째 칠한 집의 색과 다른 색의 최소비용을 더해간다.
- 1번 집의 색은 2번 집의 색과 같지 않아야 한다.
- N번 집의 색은 N-1번 집의 색과 같지 않아야 한다.
- i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.
*/