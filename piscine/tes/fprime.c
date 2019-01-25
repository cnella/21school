#include <stdlib.h>

int		checkspace(char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\n')
		return (1);
	return (0);
}

int		count(char *str)
{
	int i;
	int	kol;

	i = 0;
	kol = 0;
	while (str[i] != '\0')
	{
		if (checkspace(str, i))
			i++;
		else
		{
			kol++;
			while ((!checkspace(str, i)) && str[i] != '\0')
				i++;
		}
	}
	return (kol);
}

char 	**ft_split(char *str)
{
	char **arr;
	int		i;

	if(!(arr = (char**)malloc(sizeof(char*) * (count(str) + 1))
		return (0);
	while (str[i] && 
}
