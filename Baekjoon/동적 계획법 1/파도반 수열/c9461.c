/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c9461.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:47:20 by kwon              #+#    #+#             */
/*   Updated: 2020/09/13 19:11:33 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//파도반 수열

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int t;
    int i;
    int *arr;
    long long pado[101]={
        0,
        1,
        1,
        1,
    };

    scanf("%d",&t);
    arr = (int *)malloc(sizeof(int)*t);

    i = 0;
    while(i < t)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    i = 4;
    while(i<=100)
    {
        pado[i] = pado[i-2] + pado[i-3];
        i++;
    }

    i = 0;
    while(i<t)
    {
        printf("%lld\n",pado[arr[i]]);
        i++;
    }
    return (0);
}