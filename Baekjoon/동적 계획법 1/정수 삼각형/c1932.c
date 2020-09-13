/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1932.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:57:31 by kwon              #+#    #+#             */
/*   Updated: 2020/09/13 20:58:03 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//정수 삼각형

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int max(int a, int b)
{
    return (a > b ? a : b);
}

int main(void)
{
    int n;
    int i;
    int j;
    int tri[501][501];
    
    scanf("%d",&n);

    i = 1;
    while(i<=n)
    {
        j = 1;
        while(j<=i)
        {
            scanf("%d",&tri[i][j]);
            j++;
        }
        i++;
    }
    /*
    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++)
            scanf("%d",tri[i][j]);
    */
   i = n-1;
   while(i>=1)
   {
       j = 1;
       while(j<=i)
       {
           tri[i][j] += max(tri[i+1][j], tri[i+1][j+1]);
           j++;
       }
       i--;
   }
    /*
    for(int i=n; i>=1; i++)
        for(int j=1; j<=i; j++)
            tri[i][j] += max(tri[i+1][j], tri[i+1][j+1]);
    */
   printf("%d\n",tri[1][1]);
   return (0);

}