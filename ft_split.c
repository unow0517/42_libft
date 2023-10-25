/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:31:29 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/25 10:51:05 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	cntwords(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			cnt++;
		s++;
	}
	return (cnt);
}

static int	isdelim(char c, char delim)
{
	if (c == delim || c == '\0')
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int 	i,j;
	char	**array;
	int		cnt;
	char	*s_ptr;

	s_ptr = (char *)s;
	cnt = cntwords(s, c);
	// printf("cnt: %d\n",cnt);
	//allocate mem for substrings
    // array = malloc((cnt + 1) * sizeof(char *));
	// if (!array)
	// 	return (0);
	if (!s || !(array = malloc((cntwords(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0; // array index
	j = 0; // subarr index
	
	//allocate subarray
	while(*s_ptr != '\0' && i < cnt)
	{
		if(!isdelim(*s_ptr, c) && isdelim(*(s_ptr+1), c)) //when reach break points
		{
			array[i] = malloc((j + 1) * sizeof(char));//typecasting?
			i++;
		}
		else if(!isdelim(*s_ptr,c))
		{
			j++;
		}
		s_ptr++;
	}
	i = 0;
	j = 0;

	while(*s != '\0' && (s-1) != 0)
	{
		// printf("j: %d\n",j);
		if(!isdelim(*s,c))
		{
			// printf("i: %d, j: %d, *s: %c\n",i,j, *s);
			array[i][j] = *s;
			j++;			
		}
		else if(!isdelim(*(s - 1), c) && isdelim(*s, c))
		{
			// printf("i: %d, j: %d\n",i,j);
			if(j != 0)
				array[i][j] = '\0';
			i++;
			j=0;			
		}
		s++;
	}
	// printf("i: %d\n",i);
	if(*s == '\0' && i == cnt)
		array[i] = 0;
	else if(*s == '\0' && i < cnt)
		array[i+1] = 0;
	return (array);
}

// int main(){
//     char string[] = "hello!";
//     char delim = ' ';
//     printf("Original String: %s\n", string);
//     char** token = ft_split(string, delim);
//     int i = 0;
// 	printf("cnt: %d\n",cntwords(string,delim));
// 	while (token[i] != NULL)
// 	{
//         printf("elements len %dth: %s\n",i,token[i]);
//         i++;
//     }
// 	i=0;
// 	while(token[0][i] != '\0')
// 	{
// 		printf(" %c",token[0][i]);
// 		i++;		
// 	}

//     return 0;
// }