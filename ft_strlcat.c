/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:15 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/10 16:25:24 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	j = ft_strlen(dst);
	while (src[i] != '\0' && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	i = ft_strlen(dst) + ft_strlen(&src[i]);
	return (i);
}
// int main()
// {
//     char src[30] = "AAAAAA";
// 	char *dst = "b";

//     printf("%zu\n",strlcat(dst, src, 0));
//     printf("%zu\n",ft_strlcat(dst, src, 0));
// 	//printf("%s",strcat(dst, src));
// }