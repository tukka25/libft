/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:02:20 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/14 21:33:29 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list	*head;
// 	t_list	*lst;
// 	t_list *new;

// 	lst = ft_lstnew("ahmed ");
// 	new = ft_lstnew(" tukka");
// 	ft_lstadd_front(&lst, new);
// 	while (lst->next != NULL)
// 	{
// 		printf("%s", lst->content);
// 		lst = lst->next;
// 	}
// 	printf("%s", lst->content);
// }
