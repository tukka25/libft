/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:02:59 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/13 19:35:19 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	// if (n == 0)
	// 	return (0);
	// while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2 && n > 0))
	// {
	// 	s1++;
	// 	s2++;
	// 	n--;
	// }
	// if (*s1 != *s2 && n > 0)
	// 	return (*s1 - *s2);
	// return (0);
	// ft_memcmp(s1, s2, n);
	return (ft_memcmp(s1, s2, (size_t) n));
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[] = "";
// 	char s2[] = "1";

// 	printf("%d\n", strncmp(s1, s2, 0));
// 	printf("%d", ft_strncmp(s1, s2, 0));
	
// }
