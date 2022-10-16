/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:03 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/17 02:21:47 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*new_needle;
	char	*new_haystack;

	new_needle = (char *) needle;
	new_haystack = (char *) haystack;
	i = 0;
	if (*needle == '\0')
		return (new_haystack);
	while (*haystack != '\0' && len > 0){
		while (*haystack == *needle && len > 0)
		{
			haystack++;
			needle++;
			if (*needle == '\0'){
				return (new_haystack);
			}
			len--;
		}
		haystack++;
		len--;
		new_haystack++;
	}
	return (NULL);
}
int main()
{
	char haystack[] = "2rtyabcdhjkl";
	char needle[] = "abcd";
	
	printf("%s\n",strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	//printf("%s",ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	return (0);
}