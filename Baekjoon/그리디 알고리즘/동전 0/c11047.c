/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c11047.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 16:25:17 by kwon              #+#    #+#             */
/*   Updated: 2020/09/07 17:33:22 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//동전 0

#include <stdio.h>

int main(void)
{
    int n;
    int total;
    int i;
    int cost[1000000];
    int money;
    int cnt = 0;

    scanf("%d%d",&n,&total);

    i = 0;
    while(i != n)
    {
        scanf("%d",&money);
        cost[i] = money;
        i++;
    }

    i = n-1;
    while(i>=0)
    {
        cnt += total/cost[i];
        total %= cost[i];
        i--;  
    }
    printf("%d\n",cnt);
}