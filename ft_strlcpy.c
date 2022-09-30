/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:54:57 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/30 17:15:38 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	char	*s;

	dstsize = 0;
	ft_strlen(dst);
	i = 0;
	s = (char *) src;
	while (*s != '\0')
	{
		//dstsize--;
		i++;
		s++;
	}
	// s[i] = '\0';
	return (i);
}
// int main()
// {
// 	char src[] = "23465tt5yuiop";
// 	char dst[] = "fy8ory";

// 	printf("%lu\n", strlcpy(dst, src, strlen(dst)));
// 	printf("%lu", ft_strlcpy(dst, src, ft_strlen(dst)));
// }
