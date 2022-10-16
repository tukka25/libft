/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:22:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/16 22:08:44 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;
	int	i;
	
	tmp = *lst;
	//tmp2 = *lst;
	i = ft_lstsize(*lst);
	if (!lst || !del || !*lst)
		return ;
	while (i > 0)
	{
		tmp = tmp2;
		while (tmp->next != NULL)
		{
			if (tmp->next->next == NULL)
				tmp2 = tmp;
			tmp = tmp->next;
		}
		//tmp2 = tmp;
		ft_lstdelone(tmp, *del);
		//tmp = tmp2;
		tmp->next= NULL;
		i--;
	}
	//*lst = NULL;
}

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	if (!lst || !del || !*lst)
// 		return ;
// 	del((*(lst))->content);
// 	ft_lstclear(&((*(lst))->next), del);
// 	free(*lst);
// }
// void deleteNode(struct Node *head, struct Node *n)
// {
// if(head == n)
// {
// 	if(head->next == NULL)
// 	{
// 		printf("There is only one node. The list can't be made empty ");
// 		return;
// 	}

// 	/* Copy the data of next node to head */
// 	head->data = head->next->data;

// 	// store address of next node
// 	n = head->next;

// 	// Remove the link of next node
// 	head->next = head->next->next;

// 	// free memory
// 	free(n);

// 	return;
// }

// int main()
// {
// 	t_list *t;
// 	t_list *f;

// 	t = ft_lstnew("tukka");
// 	f = ft_lstnew("abdo");
// 	t->next = f;
// 	f->next = NULL;
// 	ft_lstclear(&t, del());
// 	while (t->next!= NULL)
// 	{
// 		printf("%s\n", t->content);
// 		t = t->next;
// 	}
// 	// del(t->content);
// 	if (t->content == NULL)
// 	{
// 		printf("true");
// 	}
// }