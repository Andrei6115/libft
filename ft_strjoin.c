/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:49:18 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:07:48 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ret = malloc(i + j + 1);
	if (!ret || !s1 || !s2)
		return (0);
	ret[i + j] = '\0';
	while (--j + 1)
		ret[i + j] = s2[j];
	while (--i + 1)
		ret[i] = s1[i];
	return (ret);
}
