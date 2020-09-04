/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12912.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 18:56:37 by kwon              #+#    #+#             */
/*   Updated: 2020/09/03 18:58:37 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//두 정수 사이의 합

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a > b){
        while(a >= b)
        {
            answer += b;
            b++;
        }
    }
    else if(a < b){
        while(a <= b)
        {
            answer += a;
            a++;
        }
    }
    else
        answer = a;
    return answer;
}