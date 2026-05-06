/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamamor <yyamamor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:14:27 by yyamamor          #+#    #+#             */
/*   Updated: 2026/05/06 15:05:33 by yyamamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **array, size_t i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (NULL);
}

static size_t	ft_words_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_input_word(char *word, char const *s, size_t end_word,
		size_t len)
{
	size_t	j;

	j = 0;
	while (len > 0)
	{
		word[j] = s[end_word - len];
		j++;
		len--;
	}
	word[j] = '\0';
}

static char	**ft_words_split(char const *s, char c, char **array, size_t num)
{
	size_t	i;
	size_t	word;
	size_t	len;

	i = 0;
	word = 0;
	while (word < num)
	{
		while (s[i] && s[i] == c)
			i++;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		array[word] = (char *)malloc(sizeof(char) * (len + 1));
		if (!array[word])
			return (free_array(array, word));
		ft_input_word(array[word], s, i + len, len);
		i += len;
		word++;
	}
	array[word] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**newarray;
	size_t	num_words;

	if (!s)
		return (NULL);
	num_words = ft_words_count(s, c);
	newarray = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!newarray)
		return (NULL);
	return (ft_words_split(s, c, newarray, num_words));
}
