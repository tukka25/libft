/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:53:10 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:03:38 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include<stdio.h>

int	ft_isprint(int x)
{
	return (x >= 32 && x <= 127);
}
// int main(){
//     char x;
//     x = ' ';
//     printf("%d",ft_isprint(x));
// }