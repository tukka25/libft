/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:04:46 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 23:11:48 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	int		j;
	char	*new_dst;
	char	*new_src;

	i = 0;
	j = 0;
	new_dst = (char *)dst;
	new_src = (char *)src;
	while (len != 0)
	{
		new_dst[i] = new_src[j];
		i++;
		j++;
		len--;
	}
	return (new_dst);
}
// int main()
// {
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

// 	printf("%s\n", ft_memmove(sResult + 1, sResult, 2));
// 	//printf("%s", memmove(sResult + 1, sResult, 2));
// 	return (0); 
// }