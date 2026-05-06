/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamamor <yyamamor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:23:01 by yyamamor          #+#    #+#             */
/*   Updated: 2026/05/06 19:19:12 by yyamamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static int	is_overflow(unsigned long n, char c, int sign)
{
	int	limit;

	limit = LONG_MAX % 10;
	if (sign == -1)
		limit++;
	if (n > (unsigned long)(LONG_MAX / 10) || (n == (unsigned long)(LONG_MAX
				/ 10) && (c - '0') > limit))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	n;

	sign = 1;
	n = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (is_overflow(n, *str, sign))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		n = n * 10 + (*str - '0');
		str++;
	}
	return ((int)(n * sign));
}
