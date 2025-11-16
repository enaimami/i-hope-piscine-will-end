#include <unistd.h>

void ft_putchar(char b)
{
    write(1,&b,1);
}

void ft_write_hex(unsigned char a)
{
    char mod;
    char div;
    char *allhexs;

    allhexs = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(allhexs[a/16]);
    ft_putchar(allhexs[a%16]);
}

void        ft_putstr_non_printable(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if(!(str[i] >= 32 && str[i] <= 126))
        {
            ft_write_hex(str[i]);
            i++;
            continue;
        }
        write(1, &str[i], 1);
        i++;
    }
}