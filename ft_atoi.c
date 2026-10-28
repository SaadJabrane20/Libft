/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:37:26 by sajabran          #+#    #+#             */
/*   Updated: 2026/10/26 13:56:56 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	r1;
	long	tmp;

	i = 0;
	r1 = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i++] == '-')
			sign = -sign;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		tmp = r1;
		r1 = (r1 * 10) + (nptr[i++] - '0');
		if (r1 / 10 != tmp && sign == 1)
			return (-1);
		if (r1 / 10 != tmp && sign == -1)
			return (0);
	}
	return ((r1 * sign));
}
