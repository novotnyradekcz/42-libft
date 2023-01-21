/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:49:00 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/21 18:45:47 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;
	char	temp[1000000];

	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = psrc[i];
		i++;
	}
	while (--i > 0)
		pdest[i] = temp[i];
	return (dest);
}
