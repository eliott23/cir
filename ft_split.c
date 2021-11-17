#include "libft.h"

static int	ft_count_sep(char const *s, char c)
{
	int	i;
	int	sc;

	sc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1])
			sc++;
		i++;
	}
	return (sc);
}

static int	ft_count_length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char **ft_split(char const *s, char c);
{
	char **str;
	int	i;
	int	a;
	int	b;

	i = 0;
	str = malloc (sizeof(char) * ft_count_sep(s,c) - 1);
	if (!str == NULL)
		return (0)
	while (i < ft_count_sep(s,c) - 1)
	{
		str[i] = malloc (sizeof(char) * ft_count_length(&s[a],c) + 1);
		if (!str[i])
			return (0);
		i++;
		a = ft_count_length(&s[a],c) + 1;
	}
	a = 0;
	i = 0;
	b = 0;
	while (i < ft_count_length(s,c) - 1)
	{
		b = 0;
		while (b < ft_count_length(s[a],c))
		{
			str[i][b] = s[b];
			b++;
		}
		str[i][b] = 0;
		i++;
		a = ft_count_length(&s[a],c) + 1;
	}
	return (str);
}

int	main()
{
	char **str;

	str = ft_split("zebi zebi zebi",' ');
	free(str);
}
