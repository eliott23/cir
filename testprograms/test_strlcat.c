int	main()
{
	char dst[5] = "Hello";
	char dst1[5] = "Hello";
	char src[] = "zeb";
	char src1[] = "zeb";

	ft_strlcat(dst,src,5);
	strlcat(dst1,src1,5);
	ps(dst);
	ps(dst1);
}
