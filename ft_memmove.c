#include <string.h>
#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t len)
{
	int	n = 0;
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = len - 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		printf("it went to if ");
		while (i)
		{
			d[i] = s[i];
			i--;
		}
		d[i] = s[i];
	}
	else
	{
		i = 0;
		printf("it went to else\n");
		while (len)
		{
			printf("this is the number of bits copied " "%d\n",n++);
			d[i] = s[i];
			i++;
			len--;
		}
	}
	return (dst);
}

int	main()
{
	int	i = 0;
	//int s[] = {1,2,3,4,5,6};
	char s[] = "123456";
	char *d = &s[2];
	printf("this is the source " "%s\n", s);
	printf("this is the dest " "%s\n",d);
	ft_memmove(d , s, 3);
	printf("this is the new dest " "%s\n", d);
	/*while (i <= 5)
	{
		printf("%c\n", d[i]);
		i++;
	}*/
}
