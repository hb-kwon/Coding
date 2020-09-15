/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c9012.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:26:17 by kwon              #+#    #+#             */
/*   Updated: 2020/09/15 19:34:33 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//괄호
//프로그래머스의 올바른 괄호와 같은 문제

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    int i;
    int j;
    int cnt;
    char braket[51];

    scanf("%d",&n);
    i = 0;
    while(i<n)
    {
        scanf("%s",braket);
        cnt = 0;
        j = 0;
        while(braket[j] != '\0')
        {
            if(braket[j] == '(')
                cnt++;
            else
                cnt--;
            if(cnt < 0)
            {
                printf("NO\n");
                break;
            }
            j++;
        }
        if(cnt > 0)
            printf("NO\n");
        else if(cnt == 0)
            printf("YES\n");
        i++;
    }
    return (0);
}
