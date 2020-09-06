/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c11729.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 17:36:17 by kwon              #+#    #+#             */
/*   Updated: 2020/09/05 18:35:49 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//하노이탑 이동순서
//math.h 라이브러리를 사용하려면 컴파일할 때 -lm 옵션을 사용해주어야한다.
#include <stdio.h>
#include <math.h>

void    hanoi(int n, int from, int by, int to)
{
    if(n == 1)
    {
        printf("%d %d\n", from, to);
        return ;
    }
    hanoi(n-1, from, to, by);
    hanoi(1, from, by, to);
    hanoi(n-1, by, from, to);
}

int main()
{
    int n;
    int cnt;

    scanf("%d",&n);
    cnt = pow(2, n) - 1;
    printf("%d\n",cnt);

    hanoi(n, 1, 2, 3);
}