/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:06:23 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/16 13:40:52 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*joined;

	i = 0;
	while (s1[i] != '\0')
		i++;
	len1 = i;
	i = 0;
	while (s1[i] != '\0')
		i++;
	len2 = i;
	i = 0;
	joined = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	while (i < len1 + len2)
	{
		if (i < len1)
			joined[i] = s1[i];
		else
			joined[i] = s2[i - len1];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
