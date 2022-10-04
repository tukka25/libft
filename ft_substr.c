/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:39:55 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/03 21:06:35 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_string;
	int		j;
	char	k;

	i = 0;
	j = 0;
	k = start - '0';
	new_string = (char *)malloc(len * sizeof(char));
	if (!new_string)
		return (NULL);
	while (s[i] != start && s[i] != '\0')
		i++;
	if (s[i] != start)
		return (NULL);
	while (s[i] != '\0' && len > 0)
	{
		new_string[j] = s[i];
		i++;
		j++;
		len--;
	}
	//new_string[j] = '\0';
	return (new_string);
}
int main ()
{
	char	s[] = "abcdefghijk";
	int ch = 'a';
	int len = 6;
	printf("%s", ft_substr(s, ch, len));
	return (0);
}