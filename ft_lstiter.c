/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:10:32 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/16 22:42:16 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp->next != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
	f(tmp->content);
}
// char	f(char c)
// {
// 	c = ft_tolower(c);
// 	return (c);
// }
// int main()
// {
// 	t_list	*t;
// 	t_list	*u;
// 	t_list	*k;

// 	t = ft_lstnew('T');
// 	u = ft_lstnew('k');
// 	k = ft_lstnew('A');
// 	t->next = u;
// 	u->next = k;
// 	k->next = NULL;
// 	ft_lstiter(t, f);
// 	while (t->next != NULL)
// 	{
// 		printf("%c", t->content);
// 		t = t->next;
// 	}
// 	printf("%c", t->content);
// }