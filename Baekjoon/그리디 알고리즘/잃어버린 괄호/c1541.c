/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c1541.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:21:11 by kwon              #+#    #+#             */
/*   Updated: 2020/09/08 21:27:38 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//잃어버린 괄호

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atoi를 한 후 num에 들어있는 숫자를 초기화해야 한다.
void reset(char* num)
{
    int i = 0;

    while(num[i] != '\0')
    {
        num[i] = '\0';
        i++;
    }
}

int main() {

    int i = 0;
    int j = 0;
    int flag=0;
    int sum = 0;
    char str[51];
    char num[6];

    scanf("%s",str);
    while(str[i] != '\0')
    {
        if(str[i] == '+' || str[i] == '-')
        {
            flag ? (sum -= atoi(num)) : (sum += atoi(num));
            reset(num);
            j = 0;
            if(str[i] == '-')
                flag = 1;
        }
        else{
            num[j] = str[i];
            j++;
        }
        i++;
    }
    //55-50+40에서 마지막 40은 while이 끝나기 때문에 계산되지 않는다.
    //마지막 숫자를 flag에 따라 처리해준다.
    flag ? (sum -= atoi(num)) : (sum += atoi(num));
    printf("%d\n", sum);
    return 0;
}