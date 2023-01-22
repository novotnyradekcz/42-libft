/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:21 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/22 20:03:10 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (dst == 0 && size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	l = i;
	while (src[i - l] != '\0')
	{
		if (i + 1 < size)
			dst[i] = src[i - l];
		if (i + 1 == size)
			dst[i] = '\0';
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (i);
}
