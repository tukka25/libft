/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:11 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 22:35:21 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ns;
	int		n;

	i = 0;
	ns = (char *) s;
	n = 0;
	while (ns[i] != '\0')
	{
		if (ns[i] == c)
			n++;
		i++;
	}
	while (*s != '\0')
	{
		if (*s == c && n == 1)
		{
			ns = (char *) s;
			return (ns);
		}
		if (*s == c)
			n--;
		s++;
	}
	return (NULL);
}
// int main()
// {
// 	char s[] = "taaaak";
// 	int c = 'a';
// 	printf("%s\n",strrchr(s, c));
// 	printf("%s",ft_strchr(s, c));
// }