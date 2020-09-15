/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c4949.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:31:21 by kwon              #+#    #+#             */
/*   Updated: 2020/09/15 19:44:58 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//균형잡힌 세상

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int s_bracket(char *s)
{
    int s_cnt = 0;
    int i = 0;
    while(s[i] != '.')
    {
        if(s[i] == '(')
            s_cnt++;
        else if(s[i] == ')')
            s_cnt--;
        if(s_cnt < 0)
            return 0;
        i++;
    }
    if(s_cnt > 0)
        return 0;
    else if(s_cnt == 0)
        return 1;
}

int b_bracket(char *s)
{
    int b_cnt = 0;
    int i = 0;
    while(s[i] != '.')
    {
        if(s[i] == '[')
            b_cnt++;
        else if(s[i] == ']')
            b_cnt--;
        if(b_cnt < 0)
            return 0;
        i++;
    }
    if(b_cnt > 0)
        return 0;
    else if(b_cnt == 0)
        return 1;
}
