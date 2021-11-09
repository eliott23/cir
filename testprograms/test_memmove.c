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
