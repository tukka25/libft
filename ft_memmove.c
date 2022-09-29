/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:04:46 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:04:47 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	char *ndst;
	char *nsrc;
	
	i = 0;
	ndst = (char *)dst;
	nsrc = (char *)src;

	while(len != 0)
	{
		ndst[i] = nsrc[i];
		i++;
		len--;
	}
	return (ndst);
}
// int main()
// {
// 	char src[] = "abcfghj";
// 	char dst[] = "jh";

// 	printf("%s", ft_memmove(dst, src, sizeof(src)));
// 	return (0); 
// }