/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:49:40 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:08:16 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s;

	if (!s1 || !set)
		return ((void *)0);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]) && (end > start))
		end--;
	s = (char *)malloc(end - start + 2);
	if (!s)
		return ((void *)0);
	i = 0;
	while (start <= end)
		s[i++] = s1[start++];
	s[i] = '\0';
	return (s);
}
