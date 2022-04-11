#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;

	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}

	while(argv[1][i])
	{
	if((argv[1][i] >= 'b' && argv[1][i] <= 'y') || (argv[1][i] >= 'B' && argv[1][i] <= 'Y'))
		{
			argv[1][i] = argv[1][i] + 1;
			write(1, &argv[1][i], 1);
		}
	else if(argv[1][i] == 'a' || argv[1][i] == 'A')
		{
			argv[1][i] = argv[1][i] + 25;
			write(1, &argv[1][i], 1);
		}
	else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
		{
			argv[1][i] = argv[1][i] -25;
			write(1, &argv[1][i], 1);
		}
	else 
		write(1, &argv[1][i], 1);
	i++;
	}
	write(1, "\n", 1);
	return(0);
}