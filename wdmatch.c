#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	i++;
	return(i);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int cont;

	if(argc == 3)
	{
		i = 0;
		j = 0;
		cont = 0;

		if(argv[2][0] == argv[1][0])
			cont++;
			i++;
		while(argv[1][i])
		{
			while(argv[2][j] && argv[2][j] != argv[1][i])
			{
				j++;
				if(argv[2][j] == argv[1][i])
					cont++;
			}
			i++;
		}
		if(ft_strlen(argv[1]) == cont)
			write(1, argv[1],ft_strlen(argv[1]));
	}
	write(1, "\n", 1);
	return(0);
}