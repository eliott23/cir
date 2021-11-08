#include <stdio.h>
#include <strings.h>
#include <libft.h>
void    ft_bzero(void *s, size_t n)
{
	unsigned char *a;

	a = (unsigned char *)s;
	while (n)
	{
		*a = 0;
		a++;
		n--;
	}
}

int	main()
{
	char s[] = "haha";
	p(s);
}
