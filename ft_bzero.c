/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:22:15 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/07 19:06:52 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_bzero(void *str, size_t n)
{
	char	*s;

	s = (char *) str;
	while (n > 0)
	{
		ft_memset(str, 0, n);
		s++;
		n--;
	}
	return (str);
}
// int main()
//  {
//       char str[] = "hello";
//       int i = 0;
// 	  int n = 6;

//     //int n = 10;
//     // printf("%s\n",ft_bzero(str,3));
//     ft_bzero(str, n);
//     while (i < n)
//     {
//         printf("%d\n", str[i]);
//         i++;
//     }
//     // printf("%s",bzero(str, 5));

// }
