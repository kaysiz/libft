void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	size_t	i;
	i = 0;
	s = (char *)str;
	while(i < n)
	{
		if((unsigned char)str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
