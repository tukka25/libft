/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:54:26 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/07 19:04:55 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*s;

	s = str;
	while (n > 0)
	{
		*s = (unsigned char)ch;
		s++;
		n--;
	}
	return (str);
}
// int main()
// {
//     char str[20] = "c programming";

//     int ch = 't';

//     int n = 10;
//     printf("%s",ft_memset(str,ch,n));
//     // ch = '0';
//     // n = 3;
//     // printf("%s",ft_memset(str,ch,n));
// }