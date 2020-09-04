/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12917.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 17:56:50 by kwon              #+#    #+#             */
/*   Updated: 2020/09/03 18:57:02 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//문자열 내림차순으로 배치하기
//strdup malloc

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char temp;
    int i=0;
    int j;
    int len = 0;
    while(s[i] != '\0')
    {
        i++;
        len++;
    }
    char* answer = (char*)malloc(len);
    //strdup
    i = 0;
    while(s[i] != '\0')
    {
        answer[i] = s[i];
        i++;
    }
    answer[i] = '\0';
    
    i = 0;
    while(i != len-1)
    {
        j= i+1;
        while(j != len)
        {
            if(answer[i] < answer[j])
            {
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
            j++;
        }
        i++;
    }
    return answer;
}