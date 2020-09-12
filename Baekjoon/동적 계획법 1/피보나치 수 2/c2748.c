/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c2748.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:58:18 by kwon              #+#    #+#             */
/*   Updated: 2020/09/12 20:17:52 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//피보나치 수 2

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    long long *fb;
    int i;
    
    scanf("%d",&n);
    fb = (long long *)malloc(sizeof(long long) * (n+1));

    fb[0] = 0;
    fb[1] = 1;
    i = 2;
    while(i <= n)
    {
        fb[i] = fb[i-1] + fb[i-2];
        i++;
    }
    printf("%lld\n",fb[n]);
    return 0;
}