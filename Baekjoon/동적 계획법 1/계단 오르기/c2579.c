/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c2579.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 20:57:56 by kwon              #+#    #+#             */
/*   Updated: 2020/09/13 21:16:51 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//계단 오르기

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int max(int a, int b)
{
    return (a>b ? a : b);
}

int main(void)
{
    int n;
    int i;
    int stair[301];
    int score[301];
    scanf("%d",&n);

    i = 1;
    while(i<=n)
    {
        scanf("%d",&stair[i]);
        i++;
    }
    /*
    for(int i=0; i<n; i++)
        scanf("%d",&stair[i]);
    */
    score[1] = stair[1];
    score[2] = stair[1] + stair[2];
    i = 3;
    while(i<=n)
    {
        score[i] = max(score[i-2], score[i-3]+stair[i-1])+stair[i];
        i++;
    }
    /*
    for(int i=3; i<=n; i++)
        score[i] = max(score[i-2], score[i-3]+score[i-1])+stair[i];
    */
    
    printf("%d\n",score[n]);
    return (0);
}
