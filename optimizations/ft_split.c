#include "libft.h"
// (opt == 0 ) --> count length ;
// ( opt == 1 ) --> skip sep ;
// ( opt == 2 ) --> count words ;
int	ft_tools(char const *s, char c, int *i, int	opt)
{
	int	len;
	int	words;

	words = 0;
	len = 0;
	if (!opt)
	{
		while (s[len] && s[len] != c)
			len++;
	}
	if (opt == 1)
	{
		while (s[*i] == c)
			(*i)++;
	}
	if (opt == 2)
	{
		while (s[len] || s[len] == c)
		{
			if (s[len] != c && (!s[len + 1] || s[len + 1] == c))
				words++;
			len++;
		}
		return (words);
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**rslt;

	i = 0;
	ft_tools(s, c, &i, 1);
	rslt = malloc((sizeof(char *) * ft_tools(s, c, &i, 2) + 1);
	return (rslt);
}

int	main()
{
	int	i = 0;
	char	*s = "sev nne c";
	printf("%d",ft_tools(s, ' ', &i, 2));
}
