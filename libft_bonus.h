/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:23:25 by bbrassar          #+#    #+#             */
/*   Updated: 2021/12/09 14:43:44 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **list_p, t_list *new_link);

int		ft_lstsize(t_list *list);

t_list	*ft_lstlast(t_list *list);

void	ft_lstadd_back(t_list **list_p, t_list *new_link);

void	ft_lstdelone(t_list *list, void (*del)(void *));

void	ft_lstclear(t_list **list_p, void (*del)(void *));

void	ft_lstiter(t_list *list, void (*f)(void *));

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *));

#endif
