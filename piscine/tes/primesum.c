#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(unsigned long long int rez)
{
	char c;

	if (rez < 10)
	{
		c = '0' + rez;
		write (1, &c, 1);
		return ;
	}
	else
	{
		ft_putnbr(rez /10);
		ft_putnbr(rez % 10);
	}
}

int		is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	prime_sum(char *argv)
{
	int	i;
	int	nb;
	unsigned long long int	rez;
	
	rez = 0;
	i = 0;
	nb = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] < '0' || argv[i] > '9')
			return ;
		nb *= 10;
		nb += argv[i] - '0';
		i++;
	}
	while (nb > 1)
	{
		if (is_prime(nb))
			rez += nb;
		nb--;
	}
	ft_putnbr(rez);
}




int		main(int argc, char **argv)
{
	if (argc == 2)
		prime_sum(argv[1]);
	exit(0);
	write (1, "\n", 1);
	return (0);
}	
