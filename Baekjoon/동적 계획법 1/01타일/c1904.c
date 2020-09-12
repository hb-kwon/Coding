/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1904.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:27:06 by kwon              #+#    #+#             */
/*   Updated: 2020/09/12 20:17:48 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//01타일

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    int *tile;

    scanf("%d",&n);

    tile = (int *)malloc(sizeof(int) *(n+1));
    tile[1] = 1;
    tile[2] = 2;

    for (int i = 3; i <= n; i++)
        tile[i] = (tile[i - 1] + tile[i - 2]) % 15746;
    
    // int i = 3;
    // while(i<=n)
    // {
    //     tile[i] = (tile[i-1] + tile[i-2]) % 15746;
    //     i++;
    // }
        
    printf("%d\n",tile[n]);
    free(tile);
    return 0;
}
/*
runtime error
int main(void)
{
    int n;
    long tile[1000001];
    int i;

    scanf("%d",&n);

    tile[1] = 1;
    tile[2] = 2;
    i = 3;
    while(i!=n+1)
    {
        tile[i] = (tile[i-1] + tile[i-2]) % 15746;
        i++;
    }
    printf("%ld\n",tile[n]);
    return 0;
}
*/