/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:52:31 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:02:54 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include<stdio.h>

int	ft_isalnum(int a)
{
	return (((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		|| (a >= 48 && a <= 57));
}
// int main()
// {
//     char a;

//     a = '-';
//     printf("%d",ft_isalnum(a));
// }