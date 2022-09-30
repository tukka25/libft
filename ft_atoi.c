/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:12:33 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/30 17:45:22 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *s;
// 	s = "-2147483648";
// 	//int n = atoi(s);
// 	//printf("%d",n);
// 	printf("%d\n", ft_atoi(s));
// 		printf("%d", atoi(s));
// }