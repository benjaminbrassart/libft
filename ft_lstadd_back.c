/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:43:41 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:37:44 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (alst)
	{
		lst = ft_lstlast(*alst);
		if (lst)
			lst->next = new;
		else
			*alst = new;
	}
}
