/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1931.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:30:27 by kwon              #+#    #+#             */
/*   Updated: 2020/09/08 18:44:32 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//회의실 배정

#include <stdio.h>
#include <stdlib.h>

//배열 -> 구조체
struct time{
    int start;
    int end;
};

//sort를 위한 compare조건
int static compare(const void *a, const void *b)
{
    struct time *time1 = (struct time*)a;
    struct time *time2 = (struct time*)b;
    
    if(time1->end < time2->end)
        return -1;
    else if(time1->end > time2->end)
        return 1;
    else
    {
        if(time1->start < time2->start)
            return -1;
        else if(time1->start > time2->start)
            return 1;
        else return 0;
    }
    
}

int main(void)
{
    int n;
    int i;
    int last;
    int cnt;
    
    scanf("%d",&n);

    struct time t[n];
    i = 0;
    while(i!=n)
    {
        scanf("%d%d",&t[i].start,&t[i].end);
        i++;
    }

    qsort(t, n, sizeof(struct time), compare);

    i = 0;
    cnt = 0;
    last = 0;
    while(i!=n)
    {
        if(t[i].start >= last)
        {
            cnt++;
            last = t[i].end;
        }
        i++;
    }
    printf("%d\n",cnt);
    return 0;
}

// int main(void)
// {
//     int n;
//     int i;
//     int last;
//     int cnt;
//     int s_time[1000000];
//     int e_time[1000000];

//     scanf("%d",&n);
//     i = 0;
//     while(i!=n)
//     {
//         scanf("%d%d",&s_time[i],&e_time[i]);
//         i++;
//     }

//     qsort(e_time, n, sizeof(int), compare);

//     i = 1;
//     cnt = 1;
//     last = e_time[0];
//     while(i!=n)
//     {
//         if(s_time[i] > min)
//         {
//             cnt++;
//             min = e_time[i];
//         }
//         i++;
//     }
//     printf("%d\n",cnt);
// }

// void time_sort(int* e_time, int n)
// {
//     int tmp;
//     int i;
//     int j;

//     i = 0;
//     while(i!=n)
//     {
//         j = 0;
//         while(j!=n-1-i)
//         {
//             if(e_time[j] > e_time[j+1])
//             {
//                 tmp = e_time[j];
//                 e_time[j] = e_time[j+1];
//                 e_time[j+1] = tmp;
//             }
//             j++;
//         }
//         i++;
//     }
// }