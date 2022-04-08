#include <unistd.h>

int main(int argc, char **argv)
{
	char tab[127];
	int i;
	int j;

		if(argc != 3)
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 0;
		while(i < 127)
		{
			tab[i] = 0;
			i++;
		}
		i = 0;
		while (argv[2][i] != 0)
		{
			j = argv[2][i];
			if(tab[j] = 0)
				tab[j] = 1;
			i++;
		}
		i = 0;
		while(argv[1][i] != 0)
		{
			j = argv[1][i];
			if(argv[1][i] == 1)
			{
				write(1, &argv[1][i], 1);
				tab[i] = 2;
			}
			i++;
		}
	write(1, "\n", 1);
	return(0);
}