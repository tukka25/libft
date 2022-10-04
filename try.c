#include "libc.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_string;
	int		j;
	char	k;

	i = 0;
	j = 0;
	k = start + '0';
	new_string = (char *)malloc(len * sizeof(char));
	while (s[i] != k && s[i] != '\0')
	{
		i++;
	}
	if (s[i] != k)
		return (NULL);
	while (s[i] != '\0' && len > 0)
	{
		new_string[j] = s[i];
		i++;
		j++;
		len--;
	}
	return (new_string);
}
int main ()
{
	char	s[] = "abcdefghijk";
	int ch = 'a';
	int len = 6;
	
	printf("%s", ft_substr(s, ch, len));
	return (0);
}