/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:36:18 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/18 23:14:16 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*new_string;
	char	tmp;

	i = 0;
	tmp = (char ) c;
	while (*s != '\0')
	{
		if (*s == tmp)
		{
			new_string = (char *) s;
			return (new_string);
		}
		s++;
	}
	if (tmp == 0)
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	char s[] = "abcdt";
// 	int c = 't' + 256;
// 	printf("%s\n",strchr(s, c));
// 	printf("%s\n",ft_strchr(s, c));
// }