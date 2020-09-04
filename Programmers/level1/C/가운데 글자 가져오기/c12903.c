/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12903.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 19:28:01 by kwon              #+#    #+#             */
/*   Updated: 2020/09/03 19:28:22 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//가운제 글자 가져오기
//짝수면 가운데 두글자 반환

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = 0;
    int i = 0;

    while(s[len] != '\0')
        len++;
    char* answer = (char*)malloc(len);
    if(len%2 == 1)
    {
        while(i != 1)
        {
            answer[i] = s[len/2];
            i++;
        }
        answer[i] = '\0';
    }
    else
    {
        while(i != 2)
        {
            answer[i] = s[len/2 -1 + i];
            i++;
        }
        answer[i] = '\0';
    }
    return answer;
}