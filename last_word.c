#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int len;

	len = 0;

if(argc != 2)
	write(1, "\n", 1);

while(argv[1][len])
	len++;
len--;
while(argv[1][len] == ' ' || argv[1][len] == 't' || argv[1][len] == 'n' || argv[1][len] == 'v' || argv[1][len] == 'r')
	len--;
while(argv[1][len] && (argv[1][len] >= 33 && argv[1][len] <= 126))
	len--;
len++;
while(argv[1][len] && (argv[1][len] >= 33 && argv[1][len] <= 126) && (argv[1][len] != ' ' || argv[1][len] != 't' || argv[1][len] != 'n' || argv[1][len] != 'v' || argv[1][len] != 'r'))
	{
		write(1, &argv[1][len], 1);
		len++;
	}
write(1, "\n", 1);
return(0);
}