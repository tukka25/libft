/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:53:17 by abdamoha          #+#    #+#             */
/*   Updated: 2022/09/29 17:04:40 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{ 
    if (dst == NULL)
    return NULL;    
    int i;

    i = 0;
    char *ns = (char *)src;
    char *nd = (char *)dst;

    while(n > 0)
    {
        
        nd[i] = ns[i];
        i++;
        n--; 
    }
    return (dst);
}
// int main()
// {
//      //int n = 3;
//     char dst[] = "aboody";
//     char src[] = "tukka";

//         printf("%s", ft_memcpy(dst, src, sizeof (src)));
        
// }