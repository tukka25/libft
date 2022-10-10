/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:54:57 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/10 15:48:05 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	if (i < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}
// int main()
// {
// 	char src[] = "coucou";
// 	char dest[] = "fy8ory";

// 	printf("%lu\n", strlcpy(dest, src, 2));
// 	printf("%lu", ft_strlcpy(dest, src, 2));
// }
