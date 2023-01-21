/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:14:18 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/21 18:11:13 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_special(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n == 0)
		write(fd, "0", 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[10];
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	ft_special(n, fd);
	if (n < 0 && n != -2147483648)
	{
		n = -n;
		neg = 1;
	}
	while (n > 0)
	{
		buf[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	if (neg)
		write(fd, "-", 1);
	while (i > 0)
	{
		i--;
		write(fd, &buf[i], 1);
	}
}
