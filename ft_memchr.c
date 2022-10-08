/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:04:03 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/08 22:14:54 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*f;

	f = (char *)s;
	i = 0;
	while (f[i] != '\0' && i < n)
	{
		if (f[i] == (char)c)
		{
			return (f + i);
		}
		i++;
	}
	return (NULL);
}
// int main () 
// {
// 	const char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	const char ch = 2;
// 	char *ret = memchr(s, ch, 4);

//    //printf("String after %s \n", ret);
//    //printf("%s\n", ft_memchr(s, 2, 3));
//    printf("%s", ret);

//    return(0);
// }

// int main () {
//    const char str[] = {0, 1, 2, 3, 4, 5};
//    const char ch = 0;
//    char *ret;

//    ret = memchr(str, ch, 1);

//    printf("%s\n",ret);

//    return(0);
// }