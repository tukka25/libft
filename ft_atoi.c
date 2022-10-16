/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:12:33 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/16 20:10:24 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// long long checker(long long result)
// {
// 	if (result >=  9223372036854775807ULL)
// 		return(-1);
// 	else if(result <=  9223372036854775809)
// 		return (0);
// 	else 
// 		return (result);
// }
int	ft_atoi(const char *str)
{
	long long	sign;
	long long	result;
	int			i;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i] >= 48 && str[i] <= 57)
		result = result * 10 + str[i++] - '0';
	
	if (result >=  INT_MAX)
		return(-1);
	else if(result <=  INT_MIN)
		return (0);
	else 
		return (result * sign);
	//checker(result);
	//return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *s;
// 	s = "92233720368547758789567";
// 	//int n = atoi(s);
// 	//printf("%d",n);
// 	printf("%d\n", ft_atoi(s));
// 		 printf("%d", atoi(s));
// }