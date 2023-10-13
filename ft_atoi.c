/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:44:48 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/12 17:16:00 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ft_atoi(const char* str)
{
    int sign = 1;
    if(*str == '-'){
        sign = -1;
        str++;
    }else if(*str == '+')
        str++;
        
    char* len_ptr = (char*)str;
    int len = 0;
    while(*len_ptr != '\0'){
        if(*len_ptr >= 48 && *len_ptr <= 57){
            len++;
        }else
            break;
           
        len_ptr++;  
    }
    printf("len:%d\n",len);
    

    int res = 0;
   
    while(*str != '\0'){        
        if(*str >= 49 && *str <= 57){
            res = res + ((*str)-48)*pow(10,len-1);
        }else if(!(*str >= 48 && *str <= 57))
            return sign*res;
        len--;
        str++;
    }    
    
    return sign*res;
}


//-,+ = 0
//-0123 = -123
//0123 = 123
//abc123 = 0


// int main(){
//     char str[]="";
//     int res = atoi(str);
//     int myRes = ft_atoi(str);
//     printf("String: %s, Int: %d\n", str, res);
//     printf("String: %s, Int: %d", str, myRes);    
// }