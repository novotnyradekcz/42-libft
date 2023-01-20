/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:30:11 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/20 08:15:23 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimmed;

	i = 0;
	j = 0;
	while (ft_inset(s1[i], set))
		i++;
	while (!ft_inset(s1[i], set) && s1[i + j] != '\0')
		j++;
	trimmed = (char *)malloc((i + j) * sizeof(char));
	if (trimmed == 0)
		return (0);
	trimmed[j] = '\0';
	while (j-- > 0)
		trimmed[j] = s1[i + j];
	return (trimmed);
}
