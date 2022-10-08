/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:18 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/07 19:08:08 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	*x;

	x = (int *)malloc(count * sizeof(int));
	if (x == NULL)
		return (NULL);
	ft_bzero (x, size);
	return (x);
}
// int main()
// {
// 	int	*x;
// 	int n,i, b;

// 	n = 5;
// 	i = 0;
// 	x = calloc(n, sizeof(int));
// 	while (i < n)
// 	{
// 		printf("%d\n",x[i]);
// 		i++;
// 	}
// 	return (0);
// }
