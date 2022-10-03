/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:39:55 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/03 15:16:39 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_string;
	int		j;

	i = 0;
	j = 0;
	new_string = (char *)malloc(len * sizeof(char));
	while (s[i] != start && s[i] != '\0')
	{
		i++;
	}
	if (s[i] != start)
		return (NULL);
	while (s[i] != '\0' && len > 0)
	{
		new_string[j] = s[i];
		i++;
		j++;
		len--;
	}
	return (new_string);
}
int main ()
{
	char	s[] = "abcdefghijk";
	int ch = 'g';
	int len = 6;
	
	printf("%s", ft_substr(s, ch, len));
	return (0);
}