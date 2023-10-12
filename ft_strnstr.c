/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:53:17 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/11 10:06:03 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char* ft_strnstr(const char* big, const char *little, unsigned int n)
{
    char* bigptr = (char*) big;
    char* lptr = (char*) little;
    unsigned int i = 1;
    int l_len = 0;
    while(i <= n){
        if(*bigptr != *lptr){
            bigptr++;
        }else{
            bigptr++;
            lptr++;
            l_len++;
        }
        if(*lptr == '\0')
            return bigptr-l_len;
        i++;
    }
    return bigptr;
}

int main(){
    char big[] = "Hello World World asd";
    char small[] = "orld";
    
    int len =50;
    char* res = strnstr(big, small, len);
    printf("strnstr is: %s\n",res);
    char* myRes = strnstr(big, small, len);
    printf("my_strnstr is: %s",myRes);
}
// after null-term. is not taken into account