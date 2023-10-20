/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:28:25 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/19 19:50:01 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//use malloc
//use % /

unsigned int	lenhelperplus(unsigned int x)
{
	if (x >= 1000000000)
		return (10);
	if (x >= 100000000)
		return (9);
	if (x >= 10000000)
		return (8);
	if (x >= 1000000)
		return (7);
	if (x >= 100000)
		return (6);
	if (x >= 10000)
		return (5);
	if (x >= 1000)
		return (4);
	if (x >= 100)
		return (3);
	if (x >= 10)
		return (2);
	return (1);
}

unsigned int	lenhelperminus(int x)
{
	if (x <= -1000000000)
		return (10);
	if (x <= -100000000)
		return (9);
	if (x <= -10000000)
		return (8);
	if (x <= -1000000)
		return (7);
	if (x <= -100000)
		return (6);
	if (x <= -10000)
		return (5);
	if (x <= -1000)
		return (4);
	if (x <= -100)
		return (3);
	if (x <= -10)
		return (2);
	return (1);
}

char	*putintplus(unsigned int num)
{
	char	*res;
	int		len;
	int		j;

	j = 0;
	len = lenhelperplus(num);
	res = (char *)malloc((len + 1) * sizeof(char));
	while (j < len)
	{
		res[len - j - 1] = (num % 10) + 48;
		num = num / 10;
		j++;
	}
	res[len] = '\0';
	return (res);
}

char	*putintminus(int num)
{
	char	*res;
	int		len;
	int		j;

	res = 0;
	len = lenhelperminus(num);
	if (num < 0 && num >= -2147483648)
	{
		num = -num;
		j = 0;
		res = (char *)malloc((len + 2) * sizeof(char));
		while (j++ < len)
		{
			res[len - j + 1] = (num % 10) + 48;
			num = num / 10;
		}
		res[0] = '-';
		res[len + 1] = '\0';
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;

	if (n < 0)
	{
		res = putintminus(n);
	}
	else
	{
		res = putintplus(n);
	}
	return (res);
}

// int main(){
// 	int i =12312313;
// 	// printf("res: %s", ft_itoa(i));
// 	// while(i)
// 	// {
//     // 	printf("%d\n", i % 10);
//     // 	i /= 10;
// 	// }
// 	// printf("len: %d\n",lenhelper(i));
// 	// printf("putintplus: %s\n",putintplus(i));
// 	printf("itoa: %s\n",ft_itoa(i));
// }