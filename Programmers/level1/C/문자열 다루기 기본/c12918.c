/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12918.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 18:57:14 by kwon              #+#    #+#             */
/*   Updated: 2020/09/03 18:59:07 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//문자열 다루기 기본
//숫자로만 구성되어있는지 확인

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int len = 0;
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
        len++;
    }
    if(len != 4 && len != 6)
        answer = false;
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] < '0' || s[i] > '9')
        {
            answer = false;
            break;
        }
        i++;
    }
    return answer;
}