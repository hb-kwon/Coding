/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12930.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 19:24:59 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 20:17:14 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//이상한 문자 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(10000);
    int i;
    int j;
    int dif = 'a' - 'A';

    i=0;
    while(s[i] != '\0')
    {
        answer[i] = s[i];
        i++;
    }

    i = 0;
    j = 0;
    while(answer[i] != '\0')
    {
        if(j%2 == 0)
        {
            if(answer[i] >= 'a' && answer[i] <= 'z')
                    answer[i] -= dif;
            j++;
        }
        else
        {
            if(answer[i] >= 'A' && answer[i] <= 'Z')
                    answer[i] += dif;
            j++;
        }
        if(answer[i] == ' ')
            j = 0;
        i++;
    }
    return answer;
}

/*
while (answer[i])
{
    if (answer[i] == ' ')
        check = -1;
    if (check % 2 == 0)
    {
        if (answer[i] >= 'a' && answer[i] <= 'z')
            answer[i] -= sub;
    }
    else
    {
        if (answer[i] >= 'A' && answer[i] <= 'Z')
            answer[i] += sub;
    }
    check++;
    i++;
}
*/