int	main()
{
	char s1[] = "ZEBI";
	char *p1 = s1 + 50;
	if(s1 < &s1[1])
		printf("%d\n",1);
}
