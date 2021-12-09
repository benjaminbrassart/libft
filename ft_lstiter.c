/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:16:53 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:40:21 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*slow;

	if (f)
	{
		while (lst)
		{
			slow = lst->next;
			f(lst);
			lst = slow;
		}
	}
}
