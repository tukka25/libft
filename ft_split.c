/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/07 23:42:49 by abdamoha         ###   ########.fr       */
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
	tmp = (char *)malloc(j * sizeof(char) + 1);
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
	if (str == NULL)
		return (NULL);
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[j++] = mem_allocation_of_strings(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	str[j] = NULL;
	return (str);
	free(str);
}

int main ()
{
	char	**tab;
	int		i;

	i = 0; 
	tab = ft_split("  my     name   is     mohamed        ", ' ');
	while(tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}