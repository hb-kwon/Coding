/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12941.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 22:23:07 by kwon              #+#    #+#             */
/*   Updated: 2020/09/08 22:38:00 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//최솟값 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int asc_compare(const void* a, const void* b)
{
    if (*(int*)a > *(int*)b)
        return 1;
    else if (*(int*)a < *(int*)b)
        return -1;
    else
        return 0;
    //return *(int*)a - *(int*)b;
}

int desc_compare(const void* a, const void* b)
{
    if (*(int*)b > *(int*)a)
        return 1;
    else if (*(int*)b < *(int*)a)
        return -1;
    else
        return 0;
    //return *(int*)b - *(int*)a;
}

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    int i=0;

    qsort(A,A_len,sizeof(int),asc_compare);
    qsort(B,B_len,sizeof(int),desc_compare);

    while(i != A_len)
    {
        answer += A[i] * B[i];
        i++;
    }
    return answer;
}