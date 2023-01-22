/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:49:00 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/22 00:38:08 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == 0 || src == 0)
		return (0);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			pdest[n] = psrc[n];
	}
	return (dest);
}
