/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:04:27 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/17 20:39:07 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ns1;
	unsigned char	*ns2;

	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	i = 0;
	while (n)
	{
		if (ns1[i] != ns2[i])
			return (ns1[i] - ns2[i]);
		i++;
		n--;
	}
	return (0);
}
// int main()
// {

// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// //  char str1[ ] = "Learn python from tyrtoprogram.com";
// //  char str2[ ] = "Learn python from tyrtoprogram.com";

//  printf("%d\n",ft_memcmp(s2, s3, 4));
//  printf("%d",memcmp(s2, s3, 4));
// }