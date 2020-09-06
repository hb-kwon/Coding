/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12943.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:06:48 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 20:18:53 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//콜라츠 추측

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    int cnt=0;
    long long n = num;
    
    while(n != 1)
    {
        if(n%2 == 0)
        {
            cnt++;
            n /= 2;
        }
        else
        {
            cnt++;
            n = n*3 + 1;
        }
    }
    if(cnt >= 500)
        answer = -1;
    else
        answer = cnt;
    return answer;
}
/*
    while(true)
    {
        if(num == 1)
            return answer;

        if(answer > 500)
            return -1;

        if(num%2 == 0)
            num /= 2;
        else if(num%2 == 1)
            num = num*3 + 1;
        answer++;
    }
*/