/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12947.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:30:53 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 18:52:25 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//하샤드 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer;
    int sum = 0;
    int n=x;

    while(n != 0)
    {
        sum += n%10;
        n /= 10;
    }
    printf("%d ",sum);
    if(x%sum == 0)
        answer = true;
    else
        answer = false;
    return answer;
}