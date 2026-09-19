/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 15:37:39 by sajabran          #+#    #+#             */
/*   Updated: 2026/09/18 17:57:59 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
