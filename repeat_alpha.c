#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int		i;
	int	rpt;

	i = 0;
	rpt = 0;
	if (argc != 2)
		write(1, "\n", 1);
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			rpt = argv[1][i] - 64;
			while(rpt > 0)
			{
				write(1, &argv[1][i], 1);
				rpt--;
			}	
		}
		else if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			rpt = argv[1][i] - 96;
			while(rpt > 0)
			{
				write(1, &argv[1][i], 1);
				rpt--;
			}
		}	
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
