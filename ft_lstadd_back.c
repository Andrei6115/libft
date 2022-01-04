/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:29:22 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:28 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (!(lst))
		return ;
	n = *lst;
	if (*lst)
	{
		n = ft_lstlast(*lst);
		n ->next = new;
	}
	else
		*lst = new;
}
