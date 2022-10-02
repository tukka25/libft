/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:15 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 20:24:50 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		j;
	char	*new_src;

	j = 0;
	new_src = (char *)src;
	if (dstsize <= 0)
		return (ft_strlen(new_src));
	i = ft_strlen(new_src);
	while (dst[j] != '\0' && dstsize > 0)
	{
		dst[i] = new_src[j];
		i++;
		j++;
		dstsize--;
	}
	dst[i] = '\0';
	return (i);
}
// int main()
// {
//     char src[30] = "AAAAAAAAA";
// 	char *dst = 'b';

//     printf("%zu\n",strlcat(dst, src, 0));
//    // printf("%zu\n",ft_strlcat(dst, src, 0));
// 	//printf("%s",strcat(dst, src));
// }