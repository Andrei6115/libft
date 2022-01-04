/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:13:49 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:07:27 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizen(int n)
{
	int	size;

	size = 1;
	while (n < -9)
	{
		n /= 10;
		size *= 10;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		size;
	char	ret;

	if (n >= 0)
		n *= -1;
	else
		write(fd, "-", 1);
	size = sizen(n);
	while (size > 9)
	{
		ret = (n / size) * -1 + '0';
		write(fd, &ret, 1);
		n %= size;
		size /= 10;
	}
	ret = n * -1 + '0';
	write(fd, &ret, 1);
}
