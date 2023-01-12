/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:49:00 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/10 13:28:42 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	temp[2147483647];

	i = 0;
	while (i < n)
	{
		temp[i] = src[i];
		i++;
	}
	while (i-- > 0)
		dest[i] = temp[i];
	return (dest);
}
