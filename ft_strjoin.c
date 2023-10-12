/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:39:46 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/11 18:25:43 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2){
    char* result;

    int len1 = 0;
    int len2 = 0;
    char* p_s1 = (char*)s1;
    char* p_s2 = (char*)s2;
    while(*(p_s1++) != '\0'){
        len1++;
    }
    while(*(p_s2++) != '\0'){
        len2++;
    }
    // printf("len1: %d, len2: %d\n",len1,len2);
    result = (char*)malloc((len1+len2)*sizeof(char));
    
    char* res_ptr = result;
    while(*s1 != '\0'){
        // printf("*s1: %d\n", *s1);
        *(res_ptr++) = *(s1++);

    }
    
    while(*s1 == '\0' && *s2 != '\0'){
        *(res_ptr++) = *(s2++);
    }

    if(*s2 == '\0')
        *res_ptr = '\0';

    return result;
}


int main(){
    char str[] = "";
    char str1[] = "";
    
    char* res = ft_strjoin(str,str1);
    printf("Result:%s",res);
}