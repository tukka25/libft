/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:55:12 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:05:54 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char ft_tolower(int n)
{
    if(n >= 65 && n <= 90)
     {
        n = n + 32;

        return (n);
     }
 return (n);
}
// int main()
// {
//     char n;

//     n = 'c';
//     printf("%c", ft_tolower(n));
// }