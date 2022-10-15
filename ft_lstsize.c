/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:33:47 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/15 16:16:33 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{	
		i++;
		lst = lst->next;
	}
	return (i + 1);
}
// int main()
// {
// 	t_list *lst;
// 	t_list *lst1;
// 	t_list *lst2;
// 	t_list *three;
// 	int i;

// 	lst = ft_lstnew("one");
// 	lst1 = ft_lstnew("two");
// 	lst2 = ft_lstnew("three");
// 	three = ft_lstnew("four");

// 	lst->next = lst1;
// 	lst1->next = lst2;
// 	lst2->next = three;
// 	three->next = NULL;
// 	i = ft_lstsize(lst);
// 	printf("%d", i);
// }