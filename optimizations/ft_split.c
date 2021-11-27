#include "libft.h"
// (opt == 0 ) --> count length ;
// ( opt == 1 ) --> skip sep ;
// ( opt == 2 ) --> count words ;
int	ft_tools(char const *s, char c, int *i, int	opt)
{
	int	len;

	len = 0;
	if (opt == 1)
	{
		while (s[*i] == c)
			(*i)++;
	}
	if (opt == 2)
	{
		while (s[len] && s[len] != c)
			len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**rslt;

	i = 0;
	ft_skip(s, c, &i, 1);
}
