/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:53:09 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/06 20:22:12 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_string(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] == set[j] && set[j] != '\0')
		{
			i++;
			count++;
			j++;
		}
		//j++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	int		count;
	char	*new_string;

	count = check_string(s1, set);
	len = ft_strlen(s1) - count;
	new_string = (char *)malloc(len * sizeof(char) + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i++] == set[j++])
			;
		new_string[count] = s1[i];
		count++;
		i++;
	}
	new_string[len] = '\0';
	return (new_string);
}
int main()
{
    char s[] ="cdkkukkacd";
    
    char set[] = "cd";

    printf("%s", ft_strtrim(s, set));
}