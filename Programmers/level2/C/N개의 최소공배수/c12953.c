/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12953.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:03:17 by kwon              #+#    #+#             */
/*   Updated: 2020/09/12 19:23:25 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//N개의 최소공배수
// a와 b의 최소공배수 = a * b / a와 b의 최대공약수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int tmp;

    if(a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    while(a != 0)
    {
        tmp = b % a;
        b = a;
        a = tmp;
    }
    return b;
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    
    int answer = arr[0];
    int i;

    i = 1;
    while (i!=arr_len)
    {
        answer = lcm(answer, arr[i]);
        i++;
    }  
    return answer;
}