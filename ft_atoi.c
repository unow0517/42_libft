/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:44:48 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/18 14:52:02 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	ft_atoi(const char *str)
{
	int		sign;
	char	*len_ptr;
	int		len;
	int		res;

	sign = 1;
	len = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;

	len_ptr = (char *)str;
	while (*len_ptr != '\0')
	{
		if (*len_ptr >= 48 && *len_ptr <= 57)
			len++;
		else
			break ;
		len_ptr++;
	}
	res = 0;
	while (*str != '\0')
	{
		if (*str >= 49 && *str <= 57)
			res = res + ((*str) - 48) * pow(10, len - 1);
		else if (!(*str >= 48 && *str <= 57))
			return (sign * res);
		len--;
		str++;
	}
	return (sign * res);
}

// -,+ = 0
// -0123 = -123
// 0123 = 123
// abc123 = 0
// int main(){
//     char str[]="";
//     int res = atoi(str);
//     int myRes = ft_atoi(str);
//     printf("String: %s, Int: %d\n", str, res);
//     printf("String: %s, Int: %d", str, myRes);    
// }