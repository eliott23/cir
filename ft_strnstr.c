#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && j < len - i)
			j++;
		if (j == n_len)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

int	main()
{
	char *hay = "Hello zabi";
	char *zab = "zfkdmavkarkmvkfmak";

	ps(ft_strnstr(hay,zab,7));
	ps(strnstr(hay,zab,7));
}
