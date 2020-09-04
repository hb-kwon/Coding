/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12931.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 21:04:40 by kwon              #+#    #+#             */
/*   Updated: 2020/09/04 21:07:57 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//자릿수 더하기
//10으로 나눈 나머지를 더하고 10을 나눠서 10^n자리의 자릿수를 더한다
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(n !=0)
    {
        answer += n%10;
        n /= 10;
    }
    return answer;
}