/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:04:03 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:04:04 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *     ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *f;

   f = (char *)s;
   i = 0;

    while(f[i] != '\0' && i < n)
    {
       if(f[i] == (char)c)
       {
          return(f + i);
       }
       i++;
    }
 return(NULL);
}
// int main () 
// {
//    const char str[] = "abdalrahmanahmedtukka";
//    const char ch = 'n';
//    char *ret;

//    //ret = memchr(str, ch, 13);

//    //printf("String after %s \n", ret);
//    printf(" %s ", ft_memchr(str, ch, 13));

//    return(0);
// }
