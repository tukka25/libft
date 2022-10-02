/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:18 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 14:33:31 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	i;
	int	*x;

	i = 0;
	size = sizeof(int);
	x = (int *)malloc(count * sizeof(int));
	if (x == NULL)
		return (NULL);
	bzero (x, size);
	return (x);
}
// int main()
// {
// 	int	*x;
// 	int n,i, b;

// 	n = 5;
// 	i = 0;
// 	b = 1;
// 	x = ft_calloc(n, sizeof(int));
// 	while (i < n)
// 	{
// 		printf("%d ",x[i]);
// 		i++;
// 	}
// 	return (0);
// }
