/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:21 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/10 13:45:56 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	while (dest[i] != 0 && i < size)
		i++;
	l = i;
	while (src[i - l] != 0)
	{
		if (i < size - 1)
			dest[i] = src[i - l];
		if (i == size - 1)
			dest[i] = 0;
		i++;
	}
	return (i);
}
