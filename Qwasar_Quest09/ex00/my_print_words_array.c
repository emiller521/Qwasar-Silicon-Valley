#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}

void	in_array(char **av)
{
    int i; 
    int j;

    i = 0;
    j = 1;
    while(av[j][1])

}

int main(int ac, char **av)
{
    if(ac > 1)
        in_array(av);
    else
    {
        ft_putchar('\n');
    }
    
}