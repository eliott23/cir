#include "libft.h"

static int	ft_count_sep(char const *s, char c)
{
	int	i;
	int	sc;

	sc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			sc++;
			i++;
			while (s[i] == c)
				i++;
		}
		else
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

static int	ft_next_substr(char const *s, char c)
{
	int	i;
	int	sep;

	sep = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			sep++;
			i++;
		}
		if (sep)
			return (i);
		i++;
	}
	return (0);
}

char **ft_split(char const *s, char c)
{
	char **str;
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	str = malloc (sizeof(char *) * (ft_count_sep(s,c) + 1));
	if (!str)
		return (0);
	while (i < ft_count_sep(s,c))
	{
		str[i] = malloc(sizeof(char) * ft_count_length(&s[a],c) + 1);
		if (!str[i])
			return (0);
		i++;
		a = ft_next_substr(&s[a],c);
	}
	str[i] = 0;
	a = 0;
	i = 0;
	while (i < ft_count_length(s,c))
	{
		b = 0;
		while (b < ft_count_length(&s[a],c))
		{
			str[i][b] = s[b];
			b++;
		}
		str[i][b] = 0;
		i++;
		a = ft_next_substr(&s[a],c);
	}
	return (str);
}

int	main()
{
	char **str;
	int	i = 0;

//	printf("%d", ft_count_length("dfg     sdg  dfg  dg", ' '));
	str = ft_split("zebi zebi zebi",' ');
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	free(str);
}
