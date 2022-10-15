/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:36:47 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/15 19:51:53 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = NULL;
}
// int main ()
// {
// 	 t_list *f;
// 	t_list *g;
// 	t_list *c;
// 	t_list *k;
// 	t_list	*tmp;

// 	f = ft_lstnew("a");
// 	g = ft_lstnew("b");
// 	c = ft_lstnew("c");
// 	// k = ft_lstnew("ds4t");

// 	f->next = g;
// 	g->next = c;
// 	c->next = NULL;
// 	 ft_lstadd_back(NULL, NULL);
// 	 k = ft_lstnew("ds4t");
// 	while (f->next)
// 	{
// 		//printf("%s", f->content);
// 		f = f->next;
// 	}
// 	printf("%s", k->content);
// }