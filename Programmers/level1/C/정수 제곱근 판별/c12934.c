/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12934.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 17:25:02 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 17:56:01 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//정수 제곱근 판별

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    long long i = 0;

	while (i * i < n)
		i++;
	if (i * i == n)
        answer = (i+1)*(i+1);
    else
        answer = -1;
    return answer;
}