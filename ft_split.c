/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:31:29 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/12 13:16:27 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char** ft_split(char const *s, char c){
    int i = 0;
    int cnt = 0;

    while(s[i] != '\0'){
        if(s[i] == c){
            cnt++;
        }
        i++;
    }
    char** array;
    printf("cnt: %d\n",cnt);

    array = malloc((cnt+1)*sizeof(char*));

    
    i = 0;
    int i_subst = 0;
    int j = 0;
    while(s[i] != '\0'){
        if(s[i] == c && i_subst != 0){
            array[j] = malloc((i_subst)*sizeof(char));
            j++;
            i_subst = 0;
        }
        i_subst++;
        i++; 
    }
    
    printf("i_subst:%d\n", i_subst);
    printf("j: %d\n",j);
    printf("i: %d\n",i);

    //SEGMENTATION FAULT PART!!
    // if(s[i] == '\0'){
    //     array[j] = malloc((i_subst)*sizeof(char));
    // }

    // array[j] = malloc((i_subst)*sizeof(char));

    
    i = 0;
    i_subst = 0;
    int k = 0;
    while(s[i] != '\0' && i_subst < cnt){
        if(s[i] != c){
            array[i_subst][k] = s[i];
            k++;
        }else{
            i_subst++;
            k=0;
        }
        i++;
    }
    
    printf("array[2]:%s\n", array[2]);
    return array;
}

int main(){
    char string[] = "Helld World Heildronn";
    char delim = 'd';
    printf("Original String: %s\n", string);
    char** token = ft_split(string, delim);
    int i = 0;
    while (token[i] != 0){
        printf("elements: %s\n",token[i]);
        i++;
    }
    printf("%s",token[2]);

    // free (token);
    return 0;
}