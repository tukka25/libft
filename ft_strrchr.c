/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:11 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/20 16:12:37 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	tmp;

	tmp = (char ) c;
	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == tmp)
			return ((char *)&s[n]);
		n--;
	}
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	char s[] = "bonjour";
// 	// char s2[] = "tttripouel";
// 	//char s3[] = "";
// 	// int c = ;
// 	printf("%s\n",strrchr(s, 's'));
// 	printf("%s\n",ft_strrchr(s, 's'));
// 	//printf("%s", s);
// }