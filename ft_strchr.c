/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:36:18 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/07 19:10:14 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*new_string;
	char	*tmp;

	i = 0;
	tmp = (char *) s;
	while (*s != '\0')
	{
		if (*s == c)
		{
			new_string = (char *) s;
			return (new_string);
		}
		s++;
	}
	if (c > 127)
		return (tmp);
	if (c == 0)
		return (tmp + ft_strlen(tmp));
	return (NULL);
}
// int main()
// {
// 	char s[] = "tukka";
// 	int c = 'u';
// 	//printf("%s",strchr(s, c));
// 	printf("%s",ft_strchr(s, c));
// }