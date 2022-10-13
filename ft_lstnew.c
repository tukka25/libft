/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:14:39 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/13 19:46:43 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	new = NULL;
	new = malloc(sizeof(t_list));
	if(!new)
		return (NULL);

	new->content = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
// 	int *content = {42, 4};
// 	ft_lstnew(();
// 	printf("%d", ft_lstnew(content));
// 	return (0);
// }