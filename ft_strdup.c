/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:49:15 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:07:38 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*ret;

	size = 0;
	while (s1[size])
		size++;
	ret = malloc (size + 1);
	if (!ret)
		return ((void *)0);
	if (s1)
		ft_strlcpy(ret, s1, size + 1);
	return (ret);
}
