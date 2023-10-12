/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:33 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/11 10:04:40 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void* ft_memmove(void* dest, const void* src, unsigned int n)
{
    unsigned char* pd = (unsigned char*) dest;
    unsigned char* ps = (unsigned char*) src;
    
    unsigned char temp[n];

    for (unsigned int i = 0; i<n; i++)
        temp[i] = ps[i];

    for (unsigned int i = 0; i<n; i++)
        pd[i]=temp[i];
    
    return 0;
}

int main(){
    const char src[50] = "SrcSrcSrc";
    char dest[50];
    strcpy(dest,"DestDestDest");
    printf("Before memmove dest = %s\n", dest);
    memmove(dest, src, strlen(src)+1);
    printf("After memmove dest = %s\n\n", dest);

    const char src_1[50] = "SrcSrcSrc";
    char dest_1[50];
    strcpy(dest_1,"DestDestDest");
    printf("Before ft_memmove dest = %s\n", dest_1);
    ft_memmove(dest_1, src_1, strlen(src_1)+1);
    printf("After ft_memmove dest = %s\n", dest_1);

}

