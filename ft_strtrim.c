/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:26:11 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/16 17:10:43 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// unsigned int ft_strlen(const char* str)
// {
//     unsigned int len = 0;
//     while(*str != '\0'){
//         len++;
//         str++;
//     }
//     return len;
// }

char* ft_strtrim(char const *s1, char const *set){
    // char* ps1 = (char*)s1;
    // int s1len = ft_strlen(s1);
    // char* p2s1 = (char*)s1;
    // int i = 0;
    // int j = 0;
    // printf("s1len:%d\n", s1len);
    
    // while(ps1[j] != '\0' && set[i] != '\0'){
    //     if(ps1[j] == set[i])
    //         i++;           
    //     j++;
    // }
    // // printf("i: %d\n",i);
    // char* s1_trimmed = (char*)malloc((s1len-i)*sizeof(char));
    // while(ps1[j] != '\0' && set[i] == '\0' && j-i<s1len){
    //     ps1[j-i] = ps1[j];
    //     j++;
    //     printf("j: %d, i: %d, s1len: %d\n",j,i,s1len);
    //     if(j == s1len - i){
    //         ps1[j] = '\0';
    //     }
    // }

    // printf("s1 after fn:%s", ps1);

    // return 0;
    int i = 0;
    int j = 0;
    int cnt_match = 0;
    int len_s1=ft_strlen(s1);
    int len_set= ft_strlen(set);
    while(s1[i] != '\0'){
        if(s1[i] == set[j])
            j++;           
        i++;
        // printf("i: %d, j: %d\n",i,j);
        if(set[j] == '\0'){
            cnt_match++;
            j=0;
        }    
    }
    // printf("cnt_match: %d",cnt_match);
    // printf("lenset: %d",len_set);
    int len_needed = len_s1 - (cnt_match*len_set);
    // printf("lens1-byte_trimmed: %d\n",len_s1-byte_trimmed);
    char* s1_trimmed = (char*)malloc(len_needed);
    i = 0;
    int k = 0;
    while(s1[i] != '\0'){
        if(s1[i] != set[j]){
            s1_trimmed[k] = s1[i];
            k++;
        }else{
            j++;
        }
        i++;
        if(set[j]=='\0'){
            s1_trimmed[k]=s1[i];
            j = 0;
        }
    }
    if(k == len_needed)
        s1_trimmed[k]='\0';
    printf("strlenResult: %lu\n", ft_strlen(s1_trimmed));
    return s1_trimmed;
}


// int main(){
//     char s1[] = "CatDogCatLion";
//     char set[] = "Cat";
//     //result should be lloorld

//     char* res = ft_strtrim(s1, set);
//     printf("result: %s",res);
//     return 0;
// }