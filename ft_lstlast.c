/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:10:31 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/15 16:58:26 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
// int main()
// {
// 	t_list *lst;
// 	t_list *first;
// 	t_list *second;

// 	lst = ft_lstnew("one");
// 	first = ft_lstnew("two");
// 	second = ft_lstnew("three");

// 	lst->next = first;
// 	first->next = second;
// 	second->next = NULL;

// 	printf("%s", ft_lstlast(lst)->content);
// }