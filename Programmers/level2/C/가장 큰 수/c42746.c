/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c42746.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 21:30:26 by kwon              #+#    #+#             */
/*   Updated: 2020/09/08 22:02:35 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//가장 큰 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
char* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(100000);
    int i;
    int max;

    i = 0;
    max = numbers[0] % 10;
    while(i != numbers_len)
    {
        if(max < numbers[i]%10)
        {
            max = numbers[i]%10;

        }
    }
    return answer;
}