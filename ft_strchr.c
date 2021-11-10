#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s,int c)
{
	int	i;
	void	*a;

	a = (const char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (a);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (a);
	}
}

int	main()
{
	char s[] = "hhAk";
	ps(ft_strchr(s,65));
}
