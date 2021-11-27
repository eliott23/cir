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
		while ((s + (*i))[len] && (s + (*i))[len] != c)
			len++;
	}
	if (opt == 1)
	{
		while (s[*i] == c)
			(*i)++;
	}
	if (opt == 2)
	{
		while (s[len++] || s[len++] == c)
		{
			if (s[len] != c && (!s[len + 1] || s[len + 1] == c))
				words++;
		}
		return (words);
	}
	return (len);
}
int	ft_fill(char **rslt, char const *s, int i, char c)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < ft_tools(s , c, &i, 2) + 1)
	{
		b = 0;
		rslt[a] = malloc(sizeof(char) * ft_tools(s, c, &i, 0) + 1);
		if (!rslt[a])
			return (0);
		while (b < ft_tools(s, c, &i, 0))
		{
			rslt[a][b] = s[i];
			b++;
			i++;
		}
		rslt[a][b] = 0;
		ft_tools(s, c, &i, 1);
		a++;
	}
	rslt[a] = 0;
	return (1);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		b;
	int		a;
	char	**rslt;

	i = 0;
	b = 0;
	a = 0;
	if (!s)
		return (0);
	ft_tools(s, c, &i, 1);
	rslt = malloc(sizeof(char *) * ft_tools(s, c, &i, 2) + 1);
	if (!rslt)
		return (0);
	if (!ft_fill(rslt, s, i, c))
		return (0);
	return (rslt);
}

int	main()
{
	int	i = 0;
	char	*s = "sev nne 9845fv eff c";
	char	**test = ft_split(s, ' ');
	while (i < 5)
	{
		printf("%s\n",test[i]);
		i++;
	}
}
