/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:12:38 by sajabran          #+#    #+#             */
/*   Updated: 2026/10/13 17:35:25 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (1)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		if (s_len == 0)
			break ;
		s_len--;
	}
	return (NULL);
}
