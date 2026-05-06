/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamamor <yyamamor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:56:26 by yyamamor          #+#    #+#             */
/*   Updated: 2026/05/02 15:03:16 by yyamamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char*)s1;
    ptr2 = (unsigned char*)s2;
    i = 0;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return (0);
}