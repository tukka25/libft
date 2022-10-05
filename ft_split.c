/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdamoha <abdamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:36 by abdamoha          #+#    #+#             */
/*   Updated: 2022/10/05 17:43:32 by abdamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_len(const char *s, int j)
{
	int	i;

	i = 0;
	j = 0;
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
	char	*new_s;
	char	*tmp;
	int		count;
	
	i = 0;
	j = 0;
	count = 0;
	new_s = (char *)s;
	while (len + 1 > 0)
	{
		j = string_len(s, j);
		tmp = (char *)malloc(j * sizeof(char) + 1);
		count = 0;
		while (s[i] != c && s[i] != '\0')
		{
			//ft_memcpy(tmp, new_s, j);
			tmp[count++] = new_s[i++];
		}
		tmp[count] = '\0';
		//return (tmp);
		len--;
		i++;
		//j++;
	}
	return (tmp);
}

int	count_string(const char *s, char c)
{
	int		i;
	int		len;
	//char	c;
	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		len;
	int		j;
	char *d = (char *)s;

	len = count_string(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *) + 1);
	i = 0;
	// mem_allocation_of_strings(s, c);
	while (len >= 0)
	{
		str[i] = mem_allocation_of_strings(s, c, len);
		len--;
		i++;
	}
	str[i] = NULL;
	return (str);
}

int main ()
{
	char	**tab;

	tab = ft_split("hello world", ' ');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
}
