int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;
	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while ( i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i])
		i++;
	}
	return(0);
}
