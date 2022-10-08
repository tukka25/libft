/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:53:09 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/07 23:22:43 by abdamoha         ###   ########.fr       */
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
		while (set[j] != '\0' && s1[i] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				count++;
			}
			else
				j++;
		}
		j = 0;
		if (s1[i] != '\0')
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
		while (set[j] != '\0' && s1[i])
		{
			if (s1[i] == set[j])
				i++;
			else
				j++;
		}
		j = 0;
		new_string[count] = s1[i];
		count++;
		if (s1[i] != '\0')
			i++;
	}
	new_string[len] = '\0';
	return (new_string);
}

int main()
{
	char *s1 = "   xxx   xxx";
	char *s2 = " x";
	char *ret = ft_strtrim(s1, " x");

	//if (!strcmp(ret, s2))
		printf("%d\n",strcmp(ret, s2));
		printf("%s", ret);
}