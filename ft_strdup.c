#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtrn;
	size_t	len;

	len = ft_strlen(s1);
	rtrn = malloc (sizeof(char) * len);
	while (len-- > 0)
		rtrn[len] =  s1[len];
	return (rtrn);
}

int	main()
{
	char	s[] = "jjhj";
	char	*c = strdup(s);

	printf("%c\n",c[5]);
}
