/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:16:08 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:24 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	sizenum(int n)
{
	int	size;

	size = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;
	int		f;

	f = 0;
	size = sizenum(n);
	if (n < 0)
		f = 1;
	else
		n *= -1;
	ret = malloc(size + 1);
	if (!ret)
		return (0);
	ret[size] = '\0';
	if (n == 0)
		ret[0] = '0';
	while (n < 0)
	{
		ret[size - 1] = (n % 10) * -1 + '0';
		n /= 10;
		size--;
	}
	if (f)
		ret[size - 1] = '-';
	return (ret);
}
