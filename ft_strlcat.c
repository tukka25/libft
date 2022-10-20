/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:15 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/20 16:30:09 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!dst && !dstsize)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	if (j >= dstsize)
		return (ft_strlen(src) + dstsize);
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	i = ft_strlen(dst) + ft_strlen(&src[i]);
	return (i);
}
// #include <string.h>
// int main()
// {

// 	// char dest[30]; memset(dest, 0, 30);
// 	// char * src = (char *)"AAAAAAAAA";
// 	// size_t size = 8;
// 	char b[0xF] = "nyan !";

// 	printf("%zu\n", strlcat(((void *)0), b, 0));
// 	printf("%zu\n",ft_strlcat(((void *)0), b, 0));
// 	// printf("%d",strcmp("", dest));
// }