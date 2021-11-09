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
	ft_memmove(t,tab,sizeof(int)*3);
	printf("the new dest\n");
	ft_put_tab(5,t);
}
