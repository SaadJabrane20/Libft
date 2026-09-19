/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 22:58:01 by sajabran          #+#    #+#             */
/*   Updated: 2026/09/19 23:26:53 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_del(char c, char del)
{
	if (c == del)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**str;
	size_t	j;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
}
