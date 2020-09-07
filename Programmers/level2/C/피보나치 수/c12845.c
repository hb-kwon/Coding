/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12845.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 19:42:58 by kwon              #+#    #+#             */
/*   Updated: 2020/09/07 20:14:45 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//피보나치 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    long long fb[n];
    int i;
    
    fb[0] = 0;
    fb[1] = 1;
    i = 2;
    while(i != n+1)
    {
        fb[i] = fb[i-1] + fb[i-2];
        fb[i] %= 1234567;
        i++;
    }
    answer = fb[n];
    return answer;
}