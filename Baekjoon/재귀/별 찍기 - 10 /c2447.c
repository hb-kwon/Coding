/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c2447.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 16:33:16 by kwon              #+#    #+#             */
/*   Updated: 2020/09/04 18:18:41 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//별찍기 - 재귀

#include <stdio.h>

char    map[3000][3000];
void    init();
void    star(int x, int y,int N);
void    print(int N);

void    init()
{
    int i;
    int j;

    i = 0;
    while(i != 3000)
    {
        j = 0;
        while(j != 3000)
        {
            map[i][j] = ' ';
            j++;
        }
        i++;
    }
}

void    star(int x, int y, int N)
{
    int i;
    int j;
    int k = N/3;
    int cnt = 0;

    if(N == 1)
    {
        map[x][y] = '*';
        return ;
    }

    i = 0;
    while(i!=3){
        j = 0;
        while(j!=3)
        {
            cnt++;
            if(cnt != 5)
                star(x+i*k, y+j*k, k);
            j++;
        }
        i++;
    }
}

void    print(int N)
{
    int i;
    int j;

    i = 0;
    while(i != N)
    {
        j = 0;
        while(j != N)
        {
            printf("%c",map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int N;

    scanf("%d",&N);
    init();
    star(0,0,N);
    print(N);
}