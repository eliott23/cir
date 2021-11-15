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
	size_t	i;
	size_t	max_index;

	i = 0;
	len = ft_strlen(s1);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (ft_is_in(s1[i],(char)set))
		i++;

}
