/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:34:27 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/22 20:49:51 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)big;
	if (little[0] == '\0' || little == big)
		return (result);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && i + j++ < len)
			{
				if (big[i + j] != little[j])
					break ;
			}
			if (little[j] == '\0')
				return (&result[i]);
		}
		i++;
	}
	return (0);
}
