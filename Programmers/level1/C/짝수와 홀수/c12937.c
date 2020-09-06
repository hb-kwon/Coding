/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12937.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 17:56:48 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 17:58:45 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//짝수와 홀수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(10000);
    if(num%2 == 0)
        answer = "Even";
    else
        answer = "Odd";
    return answer;
}