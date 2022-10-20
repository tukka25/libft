/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:44:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/20 14:25:09 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	//t_list	*tmp;
// 	t_list	*value = NULL;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	tmp = lst;
// 	value = malloc
// 	while (lst -> next != NULL)
// 	{
// 		value = ft_lstnew(f(tmp->content));
// 		if (!value)
// 			return(value);
// 		value = value->next;
// 		tmp = tmp->next;
// 	}
// 	// ft_lstiter(tmp, f(tmp->content));
// 	// ft_lstclear(&tmp, del);
// 	return (tmp);
// }