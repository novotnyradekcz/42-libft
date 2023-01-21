/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:36 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/21 18:27:58 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)s;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&result[i]);
		i++;
	}
	if (c == 0)
		return (&result[i]);
	return (0);
}
