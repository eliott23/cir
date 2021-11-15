#include "libft.h"

static int	ft_is_in(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	min_i;
	size_t	max_i;

	len = ft_strlen(s1);
	max_i = len - 1;
	min_i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (ft_is_in(s1[min_i],(char *)set))
		min_i++;
	while (ft_is_in(s1[max_i],(char *)set))
		max_i--;
	while (min_i <= max_i)
	{
		ps("it went here ");
		str[min_i] = s1[min_i];
		pc(str[min_i],0);
		min_i++;
	}
	str[min_i] = 0;
	return (str);
}

int	main()
{
	char x[] = "123";
	char s[] = "312JIJIIII4231";

	ps(ft_strtrim(s,x));
}
