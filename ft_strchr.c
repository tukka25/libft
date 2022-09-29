/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:36:18 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/30 00:01:54 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ns;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			ns = (char *) s;
			return (ns);
		}
		s++;
	}
	return (NULL);
}
// int main()
// {
// 	char s[] = "tukka";
// 	int c = 'a';
// 	printf("%s\n",strchr(s, c));
// 	printf("%s",ft_strchr(s, c));
// }