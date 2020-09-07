/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c11399.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:32:36 by kwon              #+#    #+#             */
/*   Updated: 2020/09/07 18:54:19 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ATM

#include <stdio.h>

void bubble_sort(int* time, int n)
{
    int tmp;
    int i;
    int j;

    //sort
    i = 0;
    while(i!=n)
    {
        j = 0;
        while(j!=n-1-i)
        {
            if(time[j] > time[j+1])
            {
                tmp = time[j];
                time[j] = time[j+1];
                time[j+1] = tmp;
            }
            j++;
        }
        i++;
    }
}

int min_sum(int* time, int n)
{
    int i;
    int j;
    int min = 0;

    i = 0;
    while(i!=n)
    {
        j=0;
        while(j<=i)
        {
            min += time[j];
            j++;
        }
        i++;
    }
    return (min);
}

int main(void)
{
    int n;
    int time[1000];
    int i;
    
    scanf("%d",&n);
    i = 0;
    while(i!=n)
    {
        scanf("%d",&time[i]);
        i++;
    }
    
    bubble_sort(time, n);
    printf("%d\n",min_sum(time, n));
}