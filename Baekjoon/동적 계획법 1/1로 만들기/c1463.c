/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1463.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:04:45 by kwon              #+#    #+#             */
/*   Updated: 2020/09/15 17:25:03 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//1로 만들기

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int min(int a, int b)
{
    return (a>b ? b : a);
}
int main(void)
{
    int n;
    int arr[1000001];
    int i;

    scanf("%d",&n);

    arr[1]=0;
    i = 2;
    while (i<=n)
    {
        arr[i] = arr[i-1] + 1;
        if(i % 2 == 0) arr[i] = min(arr[i], arr[i/2]+1);
        if(i % 3 == 0) arr[i] = min(arr[i], arr[i/3]+1);
        i++;
    }
    printf("%d\n",arr[n]);
    return (0);
    
}