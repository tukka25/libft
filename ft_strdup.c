/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:09:54 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/02 16:29:20 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <libc.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		n;

	i = 0;
	str = (char *)malloc((sizeof(char) + 1));
	str = (char *)s1;
	while (str[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
//  int main()
//  {
// 	char s[] = "cuocuo";

// 	printf("%s",ft_strdup(s));
// 	//printf("%s",strdup(s));
	
//  }