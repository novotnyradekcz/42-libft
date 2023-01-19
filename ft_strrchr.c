/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:52 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/19 16:21:38 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)s;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return (&result[i]);
	while (i-- > 0)
	{
		if (s[i] == c)
			return (&result[i]);
	}
	return (0);
}
