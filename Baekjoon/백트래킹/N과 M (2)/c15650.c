/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c15650.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:24:06 by kwon              #+#    #+#             */
/*   Updated: 2020/09/05 18:30:18 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//백트래킹 N과 M (2)
//1부터 N까지 자연수 중에서 중복없이 M개를 고른 수열
//고른 수열은 오름차순이어야 한다.

#include <stdio.h>

int N, M;
int arr[10];
int flag[10];

void    seq(int cnt, int cur)
{
    int i;
    int j;
    if(cnt == M)
    {
        j=0;
        while(j != M)
        {
            printf("%d ",arr[j]);
            j++;
        }
        printf("\n");
        return ;
    }
    i=cur;
    while(i!=N+1)
    {
        if(!flag[i])
        {
            flag[i] = 1;
            arr[cnt] = i;
            seq(cnt+1,i+1);
            flag[i] = 0;
        }
        i++;
    }
}

int main()
{
    scanf("%d%d",&N,&M);
    seq(0,1);
    return 0;
}