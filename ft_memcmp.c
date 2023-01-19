/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:48 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/19 17:05:25 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ps1;
	char	*ps2;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	if (n <= 0)
		return (0);
	i = 0;
	while (ps1[i] == ps2[i] && ps1[i] != 0 && ps2[i] != 0 && i < n - 1)
		i++;
	return (ps1[i] - ps2[i]);
}
