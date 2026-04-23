/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamamor <yyamamor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:47:06 by yyamamor          #+#    #+#             */
/*   Updated: 2026/04/23 14:57:34 by yyamamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len ++;
	while (src[src_len] != '\0')
		src_len ++;
	if (dest >= size)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i ++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}