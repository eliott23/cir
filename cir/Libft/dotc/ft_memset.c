#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while ((unsigned char *)b[i])
	{
		*(unsigned char *)b[i] = c;
		i++;
	}
}
