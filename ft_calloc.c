/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:24:24 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/16 13:05:09 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*result;
	
	result = malloc(nmemb * size);
	if (result == 0)
		return (0);
	bzero(result, nmemb * size);
	return (result);
}
