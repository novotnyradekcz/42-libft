/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:55:08 by rnovotny          #+#    #+#             */
/*   Updated: 2023/01/22 01:19:41 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*temp;

	if (lst == 0 || del == 0)
		return ;
	node = *lst;
	while (node != 0)
	{
		temp = node->next;
		del(node->content);
		free(node);
		node = temp;
	}
	*lst = 0;
}
