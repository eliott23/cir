#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

int	main()
{
/*	unsigned char dst1[] = "Nko";
	unsigned char dst2[] = "Nko";
	unsigned char src1[] = "skdfg";
	unsigned char src2[] = "skdfg";
*/
	int	dst1[] = {1, 2 , 3};
	int	dst2[] = {1, 2 , 3};
	int	src1[] = {6, 5 , 4};
	int	src2[] = {6, 5 , 4};
	int	i = 3;
	while (i)
	{
		pi(memcpy(dst1,src1,4));
		i--;
	}
	pi(ft_memcpy(dst2,src2,4));
}
