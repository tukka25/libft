/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:11 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/17 02:18:20 by abdamoha         ###   ########.fr       */
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
	if (c == '\0' || s == NULL)
		return (NULL);
	if (c > 127)
		return (ns);
	while (ns[i])
	{
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
int main()
{
	char s[] = "tttripouille";
	char s2[] = "tttripouiel";
	//char s3[] = "";
	// int c = ;
	printf("%s\n",strrchr(s, 't'));
	printf("%s",ft_strrchr(s, 't'));
}