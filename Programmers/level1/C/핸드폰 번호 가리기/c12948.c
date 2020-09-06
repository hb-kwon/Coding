/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12948.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 19:09:55 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 19:19:04 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//핸드폰 번호 가리기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(100000);
    int i;
    int len = 0;

    i = 0;
    while(phone_number[i] != '\0')
    {
        i++;
        len++;
    }
    i = 0;
    while(i != len-4)
    {
        answer[i] = '*';
        i++;
    }
    while(i != len)
    {
        answer[i] = phone_number[i];
        i++;
    }
    return answer;
}