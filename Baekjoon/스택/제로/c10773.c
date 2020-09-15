/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c10773.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:56:59 by kwon              #+#    #+#             */
/*   Updated: 2020/09/15 18:20:54 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//제로

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stack[100001];
int sp = 0;

void push(int n){
    stack[sp] = n;
    sp++;
}

void pop(){
    sp--;
    stack[sp] = 0;
}

int main(void)
{
    int k;
    int arr[100001];
    int i;
    int sum = 0;

    scanf("%d",&k);
    
    i = 0;
    while(i<k)
    {
        scanf("%d",&arr[i]);
        if(arr[i] != 0)
            push(arr[i]);
        else
            pop();
        i++;
    }

    i = 0;
    while(i<sp)
    {
        sum += stack[i];
        i++;
    }
    printf("%d\n",sum);

    return (0);
}