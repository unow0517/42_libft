/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:49 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/11 10:50:44 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dst, const char* src, unsigned int n)
{
    //length is always needed
    //when n = 0, return length, dest stays same.
    //when n = 1, dest is empty
    //when n > 1, dest is src, with length -1
    unsigned long src_len = 0;
    int i = 0;
    while(src[i] != '\0'){
        src_len++;
        // printf("n: %d\n",n);
        if(n >= 1)
        {
            dst[i] = src[i];
            n--;
            // i++;            
        }

        
        if(n==0){
            dst[i] = '\0';
        }

        i++;
    }

    if(n == 0){
        return src_len;
    }

    if(src[i] == '\0' || n  ){
        dst[i+1] = '\0';
        return src_len;
    }

    return src_len;

}

int main(){
    int len = 5;
    char src[20] = "ThisIsSource";
    char dest[50] = "HereIsDestination";
    printf("strlcpy: %lu\n",strlcpy(dest,src,len));
    puts(dest);

    char dest_1[50] = "HereIsDestination";;
    printf("ft_strlcpy: %u\n",ft_strlcpy(dest_1,src,len));
    puts(dest_1);
}

//length should be returned in any case
//strlcpy = output is the length it tries to copy, if dest is shorter than intended length => error
//content of dest has nothing to do with strlcpy