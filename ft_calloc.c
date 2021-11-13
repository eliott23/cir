#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*rtrn;
	size_t			i;
	unsigned char	*c;

	rtrn = malloc(count*size);
	i = 0;
	c = (unsigned char *)rtrn;
	while (i < count*size)
	{
		c[i] = 0;
		i++;
	}
	return (rtrn);
}

int	main()
{
	char *p;
	char *pt;
	int	i = 0;
	pt = calloc(90,sizeof(char));
	p = ft_calloc(90,sizeof(char));
	while (i < 90)
	{
		pi (pt[i]);
		i++;
	}
	ps ("\n");
	i = 0;
	while (i < 1000)
	{
		pi (p[i]);
		i++;
	}
	free(p);
	free(pt);
}
