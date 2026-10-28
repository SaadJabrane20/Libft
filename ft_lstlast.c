/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:44:21 by sajabran          #+#    #+#             */
/*   Updated: 2026/10/16 18:56:54 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;
	t_list	*head;

	head = lst;
	if (!lst)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	node = head;
	return (node);
}
