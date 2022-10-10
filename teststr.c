#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	if (s != NULL)
	{
		while (s[x] != '\0')
		{
			f(x, &(s[x]));
			x++;
		}
	}
}
// void	f(unsigned int i, char c)
// {
// 	char	str;

// 	str = ft_toupper(c);
// 	return (str);
// }