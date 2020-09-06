/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12944.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 17:59:54 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 18:01:58 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//평균 구하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int i= 0;
    while(i != arr_len)
    {
        answer += arr[i];
        i++;
    }
    answer /= arr_len;
    return answer;
}