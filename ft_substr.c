/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:01:37 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/16 17:53:34 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char* ft_substr(char const *s, unsigned int start, unsigned long len){
    char* substr = (char*)malloc(len*sizeof(char));
    
    while(start--){
        s++;
    }
    char* sub_pt = substr;
    while(len-- && *s != '\0'){
        *sub_pt = *s;
        sub_pt++;
        s++;
    }
 
    return substr;
}

// // printf("result in Fn is\n: %s", substr);
// //substr would be anyway 0 if malloc fails
// int main(){
//     char str[]="lorem ipsum";
//     char* res= ft_substr(str, 0, 0);

//     printf("result is: %s\n", res);

//     // char* strsub;
//     // if (!(strsub = ft_substr(str, 0, 10)))
//     //     printf("%s\n","NULL");
//     // else
//     //     printf("%s\n",strsub);
//     // if (str == strsub)
//     //     printf("%s","\nA new string was not returned");
// }

