/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:44:13 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:16 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	size_t	i;

	ret = malloc(count * size);
	i = 0;
	if (!ret)
		return (NULL);
	while (count * size > i)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
