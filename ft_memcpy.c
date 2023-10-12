/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:30 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/09 14:16:38 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NULL 0

void* ft_memcpy(void* dest, const void* src, unsigned int n)
{
    unsigned char* pd = (unsigned char*)dest;
    const unsigned char* ps = (const unsigned char*)src;

    if(( pd == NULL ) && (ps == NULL))
        return 0;

    while( *ps != '\0' && n >0){
        *pd = *ps;
        pd++;
        ps++;
        n--;
    }

    *pd = '\0';
    
    return dest;
}


#include <stdio.h>
#include <string.h>

//in strcpy, dest length should be bigger than target, or error 

int main(){
    const char src[50] = "SrcSrcSrc";
    char dest[50];
    strcpy(dest,"DestDestDest");
    printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, strlen(src)+1);
    // memcpy(dest+3, src, 12);
    printf("After memcpy dest = %s\n\n", dest);

    const char src_1[50] = "SrcSrcSrc";
    char dest_1[50];
    strcpy(dest_1,"DestDestDest");
    printf("Before ft_memcpy dest = %s\n", dest_1);
    ft_memcpy(dest_1, src_1, strlen(src)+1);
    printf("After ft_memcpy dest = %s\n", dest_1);


   
   return(0);
}

