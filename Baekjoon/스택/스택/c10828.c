/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c10828.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:42:18 by kwon              #+#    #+#             */
/*   Updated: 2020/09/15 17:57:23 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//스택
//stack point = 0 에서 부터 시작
//strcmp 두 문자열이 같으면 0

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int stack[100001];
int sp = 0;

void push(int n){
    stack[sp] = n;
    sp++;
}

void pop(){
    if(sp!=0)
    {
        printf("%d\n",stack[sp-1]);
        sp--;
    }
    else
    {
        printf("%d\n",-1);
    }
}

void size(){
    printf("%d\n",sp);
}

void top(){
    if(sp!=0)
        printf("%d\n",stack[sp-1]);
    else
        printf("%d\n",-1);
}

void empty(){
    if(sp!=0)
        printf("%d\n",0);
    else
        printf("%d\n",1);
}

int main(void)
{
    int stack_size;
    int stack[stack_size];
    int i;
    char order[10];

    scanf("%d",&stack_size);

    i = 0;
    while(i<stack_size)
    {
        scanf("%s",order);
        if(!strcmp(order,"push"))
        {
            int n;
            scanf("%d",&n);
            push(n);
        }
        else if(!strcmp(order,"pop"))   
            pop();
        else if(!strcmp(order,"size"))
            size();
        else if(!strcmp(order,"empty"))  
            empty();
        else if(!strcmp(order,"top"))    
            top();
        i++;
    }
    return (0);
}