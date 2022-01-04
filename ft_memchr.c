/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:48:41 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:57 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	if (!n && !c)
		return ((void *)0);
	i = -1;
	str = (char *)s;
	while (++i < n)
		if ((unsigned char)str[i] == (unsigned char)c)
			return (&str[i]);
	return ((void *)0);
}
