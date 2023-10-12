/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:24:07 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/11 12:57:00 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char* ft_strdup(const char* src){
    char* result;
    int len = 0;
    char* ptr = (char*)src;
    
    while(*src != '\0'){
        len++;
        src++;    
    }

    result = (char*)malloc(len*sizeof(char));
    // printf("result adress: %p\n",result);
    
    char* resultptr = result;

    while(*ptr != '\0'){
        *resultptr = *ptr;
        resultptr++;
        ptr++;
    }
    if(*ptr == '\0')
        *resultptr = '\0';
        
    return result;
}

int main(){
    char src[] = "Hello";
    char* target = strdup(src);
    char* target_1 = ft_strdup(src);

    printf("target: %s\n", target);
    printf("target_1: %s\n", target_1);
    printf("target[0]: %c\n", target[0]);
    // free(target_1);
    printf("target[0]_after free: %c\n", *target_1);
    return 0;
}