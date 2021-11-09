#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_l;
	size_t	i;

	i = 0;
	src_l = 0;
	while (src[src_l])
		src_l++;
	if (dstsize)
	{
		dstsize--;
		while (dstsize--)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
		dst[i] = '0';
	return (src_l);
}

int	main()
{
	char dst[] = "";
	//char dst1[] = "";
	char src[] = "HHHHH";
	//char src1[] = "HHHHH";
	ft_strlcpy(dst,src,0);
	ps(dst);
	//strlcpy(dst1,src1,1);
	//ps(dst1);
}
