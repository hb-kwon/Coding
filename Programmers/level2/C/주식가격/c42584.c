/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c42584.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:38:08 by kwon              #+#    #+#             */
/*   Updated: 2020/09/07 19:35:58 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//주식가격

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * prices_len);
    int i;
    int j;

    i = 0;
    while(i != prices_len)
    {
        answer[i] = 0;
        i++;
    }

    i = 0;
    while(i != prices_len)
    {
        j = i+1;
        while(j!= prices_len)
        {
            answer[i]++;
            if(prices[i] > prices[j])
                break;
            j++;
        }
        i++;
    }
    return answer;
}