#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int len;

	len = 0;
	if(argc != 2)
	{
	write(1, "\n", 1);
	return(0);
	}

	while(argv[1][len])
		len++;

	len--;
	while(len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
	write(1, "\n", 1);
	return(0);
}