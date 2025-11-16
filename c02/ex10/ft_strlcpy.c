unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
    int src_uzun;

    src_uzun = 0;
    while(src[src_uzun] != '\0')
    {
        src_uzun++;
    }

    if(size > 0)
    {
        i = 0;
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
            dest[i] = '\0';
    }

	return (src_uzun);
}
