/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:48 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/18 23:00:10 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ps;
	size_t	i;

	ps = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ps[i] == c)
			return (&ps[i]);
		i++;
	}
	return (0);
}
