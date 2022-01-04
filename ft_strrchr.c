/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:49:36 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:08:13 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (void *)0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			str = (unsigned char *)&s[i];
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	return ((char *)str);
}
