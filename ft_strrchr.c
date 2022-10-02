/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:11 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 13:56:28 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ns;
	int		n;

	i = 0;
	ns = (char *) s;
	n = 0;
	if (c > 127)
		return (ns);
	if (s == NULL || c == 0)
		return ("");
	while (ns[i] != '\0'){
		if (ns[i] == c)
			n++;
		i++;
	}
	while (*s != '\0')
	{
		if (*s == c && n == 1){
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
// 	char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
// 	// int c = ;
// 	printf("%s",strrchr(s3, 0));
// 	printf("%s",ft_strrchr(s3, 0));
// }