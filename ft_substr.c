/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:49:43 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:18:48 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return ((void *)0);
	l = ft_strlen(s);
	if (l < len)
		len = l;
	ret = malloc(len + 1);
	if (start > l)
		len = 0;
	if (!ret)
		return ((void *)0);
	while (i < len && s[start + i])
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
