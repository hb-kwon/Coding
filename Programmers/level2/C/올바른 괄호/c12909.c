/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12909.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 22:09:54 by kwon              #+#    #+#             */
/*   Updated: 2020/09/08 22:38:10 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//올바른 괄호

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int cnt = 0;
    int i = 0;
    int len = strlen(s);

    if(len % 2 != 0)
        return false;
    
    while(s[i])
    {
        if(s[i] == '(')
            cnt++;
        else
            cnt--;
        if(cnt < 0)
            return false;
        i++;
    }
    if(cnt != 0)
        answer = false;
    return answer;
}