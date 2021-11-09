#include <string.h>
#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t len)
{
	int		n;
	unsigned char *d;
	unsigned char *s;
	size_t	i;

	n = 1;
	i = len - 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		printf("it went to if ");
		while (i--)
			d[i] = s[i];
		d[i] = s[i];
	}
	else
	{
		i = 0;
		printf("it went to else\n");
		while (len--)
		{
			printf("this is the number of bits copied " "%d\n",n++);
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

int	main()
{
/*	int	i = 0;
	//int s[] = {1,2,3,4,5,6};
	char d[] = "123456";
	char *s = &d[2];
	printf("this is the source " "%s\n", s);
	printf("this is the dest " "%s\n",d);
	ft_memmove(d , s, 3);
	printf("this is the new dest " "%s\n", d);
	while (i <= 5)
	{
		printf("%c\n", d[i]);
		i++;
	}*/
	int	t[] = {1,2,3,4,5};
	int	*tab = &t[2];
	printf("the desti \n");
	ft_put_tab(3,t);
	printf("the src ");
	ft_put_tab(5,tab);
	ft_memmove(t,tab,sizeof(int)*3);
	printf("the new dest ");
	ft_put_tab(3,t);
}
