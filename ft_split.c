/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/04 16:07:29 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		len;
	char	*tmp;

	while(*s == c && *s != '\0')
		len++;
	str = (char **)malloc(len * sizeof(char *));
	while (len > 0)
	{
		while(**str != 32)
			i++;
		tmp = (char *)malloc(i * sizeof(char));
		while(**str != 32)
			*tmp++ = *str++;
		*tmp = c;
		len--;	
	}
	return (tmp);
}
int main()
{
	char s[] = "t u k";
	char c = ' ';

	printf("%c", **ft_split(s, c));
}