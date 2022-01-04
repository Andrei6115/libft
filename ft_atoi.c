/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:44:01 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:08 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	int					check_sign;
	unsigned long long	res;

	i = 0;
	check_sign = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			check_sign = 1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (i > 19 && check_sign)
			return (0);
		if (i > 19)
			return (-1);
		res = res * 10 - (str[i] - '0');
		i++;
	}
	if (!check_sign)
		return (-res);
	else
		return (res);
}
