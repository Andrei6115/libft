/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:29:28 by calecia           #+#    #+#             */
/*   Updated: 2021/10/14 17:06:34 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*t;

	if (!lst || !(*lst))
		return ;
	l = *lst;
	while (l)
	{
		t = l;
		l = l->next;
		del(t->content);
		free(t);
		t = NULL;
	}
	*lst = NULL;
}
