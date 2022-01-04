/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:30:08 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:54 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*next;

	if (!lst)
		return (0);
	i = 1;
	next = lst->next;
	while (next)
	{
		i++;
		next = next->next;
	}
	return (i);
}
