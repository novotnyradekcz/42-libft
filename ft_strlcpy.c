/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:02 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/10 13:45:58 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (src[i] == '\0')
		return (i);
	while (src[i] != '\0')
		i++;
	return (i);
}
