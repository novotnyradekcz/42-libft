/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:17 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/16 12:34:11 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(char **result, char *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c)
			j++;
		l = j;
		result[k] = (char *)malloc((l + 1) * sizeof(char));
		result[k][j] = '\0';
		while (j-- > 0)
			result[k][j] = s[i + j];
		i += l;
		k++;
	}
}

char	**ft_split(char const *s, char *c)
{
	char	**result;
	int		size;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			size++;
		i++;
	}
	result = (char **)malloc((size + 1) * sizeof(char *));
	result[size] = 0;
	ft_cpy(result, s, c);
	return (result);
}