/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:49 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/13 08:42:46 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

unsigned long ft_strlen(const char* str)
{
    unsigned long len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}

unsigned long ft_strlcpy(char *dst, const char* src, unsigned int n)
{

    //test dest is rrrrrr
    //returns length of intended string;
    //length is always needed
    //when n = 0, return length, dest stays same. = PASS
    //when n = 1, dest is ^@rrrrr
    //when n > 1, dest is src, with length -1
    //when n < length of dest, rest of dest should be kept
    //length is including '\0'
    unsigned long result = 0;
    unsigned long srclen = ft_strlen(src);
    char* srcp = (char*)src;
    char* dstp = dst;

    //WHEN n  >= srclen + 1
    while(*srcp != '\0' && n >= srclen + 1){
        *dstp = *srcp;
        dstp++;
        srcp++;

    }

    if(*srcp == '\0')
        *dstp = '\0';
        result = srclen;
    //WHEN n  >= srclen + 1 END

    //WHEN n < srclen + 1
    while(*srcp != '\0' && n < srclen + 1 && n ){
        *dstp = *srcp;
        dstp++;
        srcp++;
        n--;
    }

    if(n == 0){
        *(dstp-1) = '\0';
    }
    //WHEN n < srclen + 1 END

    //WHEN N == 0
    if(n==0)

        result = srclen;
    //WHEN N == 0 END



    return result;


    
    // unsigned long src_len = 0;
    // int i = 0;
    // while(src[i] != '\0'){
    //     src_len++;
    //     // printf("n: %d\n",n);
    //     if(n >= 1)
    //     {
    //         dst[i] = src[i];
    //         n--;
    //         // i++;            
    //     }

        
    //     // if(n==0){
    //     //     dst[i] = '\0';
    //     // }

    //     i++;
    // }

    // if(n == 0){
    //     return src_len;
    // }

    // if(src[i] == '\0' || n  ){
    //     dst[i+1] = '\0';
    //     // dst[i] = '\0';
    //     return src_len;
    // }

    // return src_len;
}


// int main(){
//     int n = 0;
//     char src[50] = "lora";
//     char dest[15] = "rrrrrr";
//     printf("n: %d\n",n);
//     printf("srclen: %lu\n\n",ft_strlen(src));
//     printf("strlcpy: %lu\n",strlcpy(dest,src,n));
//     puts(dest);

//     char dest_1[15] = "rrrrrr";;
//     printf("ft_strlcpy: %lu\n",ft_strlcpy(dest_1,src,n));
//     puts(dest_1);
// }

//length should be returned in any case
//strlcpy = output is the length it tries to copy, if dest is shorter than intended length => error
//content of dest has nothing to do with strlcpy


