/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 22:58:01 by sajabran          #+#    #+#             */
/*   Updated: 2026/09/20 13:59:21 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char del)
{
	return (c == del);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (!is_charset(s[i], c) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (is_charset(s[i], c))
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*get_word(char const *s, size_t *i, char c)
{
	size_t	start;
	size_t	len;
	char	*word;

	while (s[*i] && is_charset(s[*i], c))
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && !is_charset(s[*i], c))
	{
		len++;
		(*i)++;
	}
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (start + len < *i)
	{
		word[len] = s[start + len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_split(char **str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		str[j] = get_word(s, &i, c);
		if (!str[j])
		{
			free_split(str, j);
			return (NULL);
		}
		j++;
	}
	str[j] = NULL;
	return (str);
}
