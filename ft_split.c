/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamamor <yyamamor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:14:27 by yyamamor          #+#    #+#             */
/*   Updated: 2026/05/05 12:45:40 by yyamamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_split(char **str_array, int word)
{
	while (word > 0)
	{
		word--;
		free(str_array[word]);
	}
	free(str_array);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int		word;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	str_array = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str_array)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		str_array[word] = ft_substr(s, i, len);
		if (!str_array[word])
		{
			free_split(str_array, word);
			return (NULL);
		}
		i += len;
		word++;
	}
	str_array[word] = NULL;
	return (str_array);
}