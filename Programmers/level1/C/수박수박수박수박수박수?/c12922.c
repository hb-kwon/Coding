/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12922.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 19:29:36 by kwon              #+#    #+#             */
/*   Updated: 2020/09/06 17:24:02 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//수박수박수박수
//문자열의 크기 : 한글은 2바이트
//char* 와 char []의 차이

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(200000);
    // 한글은 2바이트 + '\0' 총 3바이트를 고려해서 할당
    char* su = "수";
    char* bak = "박";
    int i=0;
    while(i != n)
    {
        if(i%2 == 0)
            strcat(answer, su);
        else
            strcat(answer, bak);
        i++;
    }
    return answer;
}

/*
char* solution(int n) {

	// n은 글자수와 같다
	// 한글은 2바이트로 알고 있으나 3바이트로 해야 문제가 풀림
	// '(n*3)'은 글자 하나의 공간, +1은 '\0'이 들어갈 공간
	char * answer = (char*)malloc(sizeof(char)*(n * 3) + 1);

	// 짝수 번지에는 "수"를, 홀수 번지에는 "박"을 넣는 동작
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)  strcpy(answer + (i * 3), "수");
		else strcpy(answer + (i * 3), "박");
	}

	return answer;
}
*/