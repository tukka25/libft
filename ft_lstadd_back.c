/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:36:47 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/20 16:06:48 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
// int main ()
// {
// 	t_list *l;
// 	t_list *l2;
// 	t_list *c;
// 	t_list *k;
// 	t_list	*tmp;

// 	l = NULL;
// 	l2 = NULL;
// 	// f = ft_lstnew("a");
// 	// g = ft_lstnew("b");
// 	// c = ft_lstnew("c");
// 	//  k = ft_lstnew("ds4t");

// 	// f->next = g;
// 	// g->next = c;
// 	// c->next = NULL;
// 	 ft_lstadd_back(&l, l2);
// 	//  k = ft_lstnew("ds4t");
// 	// while (l->next)
// 	// {
// 	// 	printf("%s\n", l->content);
// 	// 	l = l->next;
// 	// }
// 	printf("%s", l->next->next->next->content);
// }