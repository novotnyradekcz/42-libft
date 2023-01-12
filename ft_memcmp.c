/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:48 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/10 13:31:19 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	if (n <= 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0 && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
