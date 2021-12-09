/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:40:24 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:44:05 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof (*lst));
	if (lst)
	{
		lst->content = content;
		lst->next = NULL;
	}
	return (lst);
}
