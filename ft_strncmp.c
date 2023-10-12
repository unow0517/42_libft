/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:05:25 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/10 07:26:22 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char* str1, const char* str2, unsigned int n){
    while(*str1 != '\0' && *str2 != '\0' && n--)
    {
        if(*str1 != *str2){
            return *str1-*str2;
        }else{
            str1++;
            str2++;
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>

int main () {
    char str1[15];
    char str2[15];
    int ret;
    int myRet;
    
    strcpy(str1, "Abbb");
    strcpy(str2, "aAA");

    ret = strncmp(str1, str2, 0);
    myRet = ft_strncmp(str1, str2, 0);

    printf("ret value is: %d\n", ret);
    printf("myRet value is: %d", myRet);
    
    return(0);
}

//find the first different elemnt and get the value