#include <string.h>
#include "libft.h"
/*void	*memchr(const void *s, int c, size_t n)
{
	
}
*/
int	main()
{
	char s[] = "Hello";
	char *p = s + 6;

	ft_memset(p,65, 4);
	ps(p);
	ps(memchr(s,255,10));
}
