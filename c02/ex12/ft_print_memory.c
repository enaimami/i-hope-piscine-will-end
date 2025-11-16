void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned long c = (unsigned long)addr;
    // addr aslında buraya 000000000000 gibi geliyor.

}

int main(int argc, char const *argv[])
{
    ft_print_memory("merhaba",10);
    /* code */
    return 0;
}
