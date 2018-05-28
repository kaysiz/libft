char    *ft_strcat(char *dest, const char *src)
{
    char    *s1;
    char    *s2;

    s1 = dest;
    s2 = (char *)src;
    while (*s1)
        s1++;
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return (dest);
}
