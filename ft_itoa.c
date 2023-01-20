/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:13:08 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/20 08:17:20 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_neg(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_len(int n, int num)
{
	int	l;

	l = 0;
	if (n < 0)
		l++;
	while (num > 0)
	{
		num /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		i;
	int		num;
	int		l;
	char	*result;

	i = 0;
	l = 0;
	num = ft_neg(n);
	l = ft_len(n, num);
	result = (char *)malloc((l + 1) * sizeof(char));
	if (result == 0)
		return (0);
	if (n < 0)
	{
		result[i] = '-';
		i++;
	}
	while (i < l)
	{
		result[i] = num % (10 * (l - i)) + 48;
		i++;
	}
	result[i] = '\0';
	return (result);
}
