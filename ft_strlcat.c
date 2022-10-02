/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:15 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 20:17:08 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	g;
	int		j;
	char	*new_src;

	j = 0;
	g = dstsize;
	new_src = (char *)src;
	i = ft_strlen(new_src);
	while (dst[j] != '\0' && g > 0)
	{
		dst[i] = new_src[j];
		i++;
		j++;
		g--;
	}
	dst[i] = '\0';
	return (i);
}
// int main()
// {
//     char src[30] = "AAAAer";
// 	char dst[30] = "Bdfgip";

//     printf("%zu\n",strlcat(dst, src, 1));
//     printf("%zu\n",ft_strlcat(dst, src, 1));
// 	//printf("%s",strcat(dst, src));
// }