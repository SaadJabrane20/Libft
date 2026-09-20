/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 04:46:24 by sajabran          #+#    #+#             */
/*   Updated: 2026/09/20 13:41:01 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count = 1;
		nb = -nb;
	}
	while (nb)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	fill(char *str, int n, int length)
{
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		i++;
		nb = -nb;
	}
	str[length] = '\0';
	while (length > i)
	{
		length--;
		str[length] = (nb % 10) + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;

	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	count = counter(n);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	fill(str, n, count);
	return (str);
}
