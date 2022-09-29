/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:54:57 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:31:21 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) src;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main()
// {
// 	char src[] = "234657";
// 	char dst[] = "fy8o";

// 	printf("%lu", strlcpy(dst, src, 5));
// 	printf("%lu", ft_strlcpy(dst, src, 5));
	
// }
