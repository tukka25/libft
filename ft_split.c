/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/05 21:57:48 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_len(const char *s, int j)
{
	int	i;

	i = 0;
	while (s[j] != '\0')
	{
		if (s[j] == ' ')
			return (j);
		j++;
	}
	return (0);
}

char	*mem_allocation_of_strings(const char *s, char c, int len)
{
	int		i;
	int		j;
	char	*tmp;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	j = string_len(s, j);
		tmp = (char *)malloc(j * sizeof(char) + 1);
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
		if (s[i] == c)
			len++;
		i++;
	}
	return (len + 1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		len;
	int		j;

	len = count_string(s, c);
	str = (char **)malloc(len * sizeof(char *) + 1);
	i = 0;
	j = 0;
	while (*s == c)
			s++;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[j] = mem_allocation_of_strings(s, c, len);
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	str[j] = NULL;
	return (str);
}

int main ()
{
	char	**tab;

	tab = ft_split(" this is", ' ');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);

}