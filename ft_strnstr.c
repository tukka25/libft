/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:03 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/30 00:01:27 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*nn;
	char	*nh;

	nn = (char *) needle;
	nh = (char *) haystack;
	i = 0;
	if (*needle == '\0')
		return (nh);
	while (*haystack != '\0' && len > 0){
		while (*haystack == *needle && len > 0){
			haystack++;
			needle++;
			if (*needle == '\0'){
				return (nh);
			}
			len--;
		}
		haystack++;
		len--;
		nh++;
	}
	return (NULL);
}
// int main()
// {
// 	char haystack[] = "2rtyabcdhjkl";
// 	char needle[] = "abcd";
// 	printf("%s\n",strnstr(haystack, needle, 10));
// 	printf("%s",ft_strnstr(haystack, needle, 10));
// 	return (0);
// }