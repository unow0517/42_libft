/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:40:33 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/09 18:05:02 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char* ft_strrchr(const char *str, int c)
{
    char* newptr = 0;
    char* ptr = (char*) str;
    
    while(*ptr != '\0'){
        if(*ptr != c){
            ptr++;
        }else{
            newptr = ptr;
            ptr++;
        }
    }
    
    if(*ptr == '\0'){
        return newptr;
    }

    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = 'o';
//    char *ret;

//    ret = strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    char* ft_ret;

//    ft_ret = ft_strrchr(str,ch);

//    printf("String after |%c| is - |%s|\n", ch, ft_ret);
   
//    return(0);
// }