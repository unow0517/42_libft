/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:49 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/17 18:45:39 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

// unsigned long ft_strlen(const char* str)
// {
//     unsigned long len = 0;
//     while(*str != '\0'){
//         len++;
//         str++;
//     }
//     return len;
// }

unsigned long ft_strlcpy(char *dst, const char* src, unsigned int n)
{
    unsigned long result = 0;
    unsigned long srclen = strlen(src);
    char* srcp = (char*)src;
    char* dstp = dst;
	unsigned n1;


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
	n1 = n;
    while(*srcp != '\0' && n1 < srclen + 1 && n1 ){
        *dstp = *srcp;
        dstp++;
        srcp++;
        n1--;
    }

	
    if(n1 == 0){
        *(dstp-1) = '\0';
		result = srclen;
    }
    
	// WHEN n < srclen + 1 END

    //WHEN N == 0
    if(n==0)
        result = srclen;
    //WHEN N == 0 END

    return result;
}

    //test dest is rrrrrr
    //returns length of intended string;
    //length is always needed
    //when n = 0, return length, dest stays same. = PASS
    //when n = 1, dest is ^@rrrrr
    //when n > 1, dest is src, with length -1
    //when n < length of dest, rest of dest should be kept
    //length is including '\0'

// int main(){
//     int n = 0;
//     char src[50] = "aaa";
//     char dest[15] = "rrrrrr";
//     printf("n: %d\n",n);
//     printf("srclen: %lu\n\n",strlen(src));
//     printf("strlcpy: %lu\n",strlcpy(dest,src,n));
//     puts(dest);

//     char dest_1[15] = "rrrrrr";;
//     printf("ft_strlcpy: %lu\n",ft_strlcpy(dest_1,src,n));
//     puts(dest_1);
// }

//length should be returned in any case
//strlcpy = output is the length it tries to copy, if dest is shorter than intended length => error
//content of dest has nothing to do with strlcpy


