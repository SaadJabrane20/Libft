/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajabran <sajabran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:43:01 by sajabran          #+#    #+#             */
/*   Updated: 2026/10/25 15:04:41 by sajabran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char set)
{
	return (c == set);
}

static size_t	count_words(const char *str, char set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], set))
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && !is_charset(str[i], set))
				i++;
		}
	}
	return (count);
}

static void	free_split(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	*word_dup(const char *s, size_t *i, char c)
{
	size_t	start;
	size_t	len;
	char	*word;

	while (s[*i] != '\0' && is_charset(s[*i], c))
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && !is_charset(s[*i], c))
	{
		len++;
		(*i)++;
	}
	word = malloc(len + 1);
	if (word == NULL)
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**strs;
	size_t	count;
	size_t	j;

	count = count_words(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		strs[j] = word_dup(s, &i, c);
		if (strs[j] == NULL)
		{
			free_split(strs);
			return (NULL);
		}
		j++;
	}
	strs[j] = NULL;
	return (strs);
}
