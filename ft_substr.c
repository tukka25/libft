/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:39:55 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/08 22:14:19 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;
	int		j;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	j = 0;
	if (len > i)
		len = i;
	if (start > i)
	{
		new_string = (char *)malloc(sizeof(char) + 1);
		new_string[0] = 0;
		return (new_string);
	}
	new_string = (char *)malloc(len * sizeof(char) + 1);
	if (!new_string)
		return (NULL);
	while (s[start] != '\0' && len-- > 0)
		new_string[j++] = s[start++];
	new_string[j] = '\0';
	return (new_string);
}
// int main ()
// {
// 	char	s[] = "tripouille";
// 	int ch = 0;
// 	int len = 4200;
// 	printf("%s", ft_substr(s, ch, len));
// 	return (0);
// }