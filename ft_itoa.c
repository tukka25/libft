/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:19:11 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/17 23:06:22 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_of_digits(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while ((n / 10) != 0)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

char	*printing(long nb, int len, char *str)
{
	char	result;

	while (nb > 0)
	{
		result = (nb % 10) + '0';
		str[len - 1] = result;
		nb = nb / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	nb = n;
	len = number_of_digits(nb);
	str = malloc(len * (sizeof(char)) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	str = printing(nb, len, str);
	return (str);
}

// int main(int ac, char **av)
// {
// 	printf("Our itoa says:	%s\n", ft_itoa(01001));
// 	// printf("PC  Atoi says:	%d\n",	 atoi(av[1]));
// }
