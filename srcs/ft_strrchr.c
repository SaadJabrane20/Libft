/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:17:42 by sajabran          #+#    #+#             */
/*   Updated: 2026/09/14 00:28:55 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = i;
		i++;
	}
	if (str[j] == (char)c)
		return (&str[j]);
	if (str[i] == (char)c)
		return (&str[i]);
	return (NULL);
}
