/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:02:59 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/14 15:54:06 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
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
