/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:15 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 22:34:14 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	g;
	int		d;

	i = 0;
	g = dstsize;
	while (dst[i] != '\0')
	{
		i++;
	}
	d = 0;
	while (dstsize != 0 &&src[d] != '\0')
	{
		i++;
		d++;
	}
	if (g > i)
	{
		return (i);
	}
	dst[i] = '\0';
	return (i);
}
// int main()
// {
//     char dst[10] = "abcd";
//     char src[100] = "abcd";

//     int n = strlcat(dst, src, 0);
//     //printf("%zu",ft_strlcat(dst, src, -1));
//     printf("%d",n);
// }