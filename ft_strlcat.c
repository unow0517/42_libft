/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:44:57 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/10 15:52:12 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
unsigned int ft_strlcat(char* dst, const char* src, unsigned int size)
{
    char* dptr = dst;
    char* dsrc = (char*)src;
    int lensum = 0;

    while(*dptr != '\0' && size){
        
        lensum++;
        dptr++;
        size--;
    }
    while(*dptr == '\0' && *dsrc != '\0'){
        if(size>1){
            *dptr = *dsrc;
        }
        dptr++;
        dsrc++;
        lensum++;
        size--;
    }
    if(*dsrc == '\0' || size == 1){
        *dptr = '\0';
    }
    
    return lensum;
}

int main(){

    int len = 7;
    
    char dStr[15] = "Hello";
    char sStr[] = "World";


    int res = strlcat(dStr, sStr, len);
    printf("res is: %d\n", res);
    printf("dest is: %s\n", dStr);

    char dStr_1[15] = "Hello";
    char sStr_1[] = "World";

    int res_1 = ft_strlcat(dStr_1, sStr_1, len);
    printf("res is: %d\n", res_1);
    printf("dest is: %s\n", dStr_1);
    
    return 0;
}

//return value = length sum of dStr, sStr
//len is to be # of letter in dest - 1.
//dest should be same or bigger than len, otherwise error(illegal instruction)