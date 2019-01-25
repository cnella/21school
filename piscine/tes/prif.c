#include <stdio.h>
#include <stdlib.h>

void fprim(char *str)
{
	int i;
	int nb;

	i = 2;
	nb = atoi(str);
	if (nb == 1)
		printf("%d", nb);
	if (nb <= 1)
		return ;
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb == i)
				return ;
			printf("*");
			nb = nb / i;
			i = 1;
		}
			++i;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		fprim(argv[1]);
	printf("\n");
	return (0);
}

