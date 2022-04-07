#include <unistd.h>

unsigned char	print_bits(unsigned char octet)
{
	int i;
	int temp;
	
	i = 7;
	while(i >= 0)
	 {
		temp = octet & 128;
		if(temp)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet << 1;
		i--;
	 }
	return (0);
}

int		main(void)
{
	char n = 't';
	print_bits(n);
	write(1, "\n", 1);
}