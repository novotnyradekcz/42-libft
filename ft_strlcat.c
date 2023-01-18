/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:21 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/18 22:56:39 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	while (dst[i] != 0 && i < size)
		i++;
	l = i;
	while (src[i - l] != 0)
	{
		if (i < size - 1)
			dst[i] = src[i - l];
		if (i == size - 1)
			dst[i] = 0;
		i++;
	}
	return (i);
}
