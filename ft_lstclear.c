/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:55:08 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/18 20:32:31 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*tofree;

	node = lst;
	while (node->next != 0)
	{
		del(node->content);
		tofree = node;
		node = node->next;
		free(tofree);
	}
	lst = 0;
}
