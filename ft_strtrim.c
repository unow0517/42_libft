/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:26:11 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/18 14:12:05 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// static char	*mv_head(char const *s1, char const *set)
// {
// 	int		i;
// 	char	*s1_1;
// 	int		j;
// 	int		k;

// 	s1_1 = (char *)s1;

// 	while (s1_1[j] != '\0')
// 	{
// 		while (set[k] != '\0')
// 		{
// 			if (s1_1[j] == set[k])
// 			{
// 				printf("j:%d, k: %d\n",j,k);
// 				i++;
// 				j++;
// 				k = -1;
// 			}
// 			k++;
// 		}
// 		j++;
// 	}
// 	printf("i :%d\n",i);
// 	return (s1_1+i);
// }

// static int	idx_tail(char const *s1, char const *set)
// {
// 	char	*s1_1;
// 	char	*newptr;
// 	int		i;
// 	int		j;
// 	int		idx;

// 	s1_1 = (char *)s1;
// 	i = strlen(s1) - 1;
// 	j = 0;
// 	while (i)
// 	{
// 		while (set[j] != '\0')
// 		{
// 			if (s1_1[i] == set[j])
// 			{
// 				// printf("i:%d, j: %d\n",i,j);
// 				i--;
// 				j = -1;
// 			}
// 			else
// 				printf("i:%d, j: %d\n",i,j);
// 			j++;
// 		}
// 		i--;
// 	}
// 	return (i);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	return (*s1 + *set);
// }


// int main(){
//     char s1[] = "CatDogCatLionCat";
//     char set[] = "Cat";
//     //result should be lloorld

//     // char* res = ft_strtrim(s1, set);
// 	int res = idx_tail(s1, set);
// 	// char* res = mv_head(s1, set);
//     // printf("result: %s",res);
// 	printf("index: %d",res);

//     return 0;
// }