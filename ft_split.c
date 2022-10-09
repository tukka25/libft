/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/09 15:03:53 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_len(const char *s, int j, char c)
{
	int	i;

	i = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (j);
		j++;
	}
	return (0);
}

char	*mem_allocation_of_strings(const char *s, char c)
{
	int		i;
	int		j;
	char	*tmp;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	j = string_len(s, j, c);
	tmp = (char *)malloc((j + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		tmp[count++] = s[i++];
	}
	tmp[count] = '\0';
	return (tmp);
}

int	count_string(const char *s, char c)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;
	int		j;

	if (!s)
		return (NULL);
	len = count_string(s, c);
	str = (char **)malloc(len * sizeof(char *) + 1);
	j = 0;
	if (!str)
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[j] = mem_allocation_of_strings(s, c);
			while (*s && *s != c)
				s++;
			j++;
		}
	}
	str[j] = NULL;
	return (str);
}

// int main ()
// {
// 	char	**tab;
// 	int		i;
// 	tab = ft_split("  tripouille  42  ", ' ');
// 	i = 0; 
// 	while (tab[i] != NULL)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	 if (tab[i] == NULL)
// 	 printf("%d", i);
// 	//printf("%d", i);
// }