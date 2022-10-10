/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:18 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/10 19:58:02 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*x;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	x = malloc(count * size);
	if (!x)
		return (NULL);
	ft_bzero (x, (size * count));
	return (x);
}
// int main()
// {
// 	int	*x;
// 	int n,i, b;

// 	n = 0;
// 	i = 0;
// 	int size = 0;
// 	x = ft_calloc(n, size);
// 	while (i < n)
// 	{
// 		printf("%d\n",x[i]);
// 		i++;
// 	}
// 	return (0);
// }
