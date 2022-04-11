#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int temp;
	
	i = 0;
	while(i <= 7)
	 {
		temp = octet & 1;
		if(temp)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet  >> 1;
		i++;
	 }
	return (0);
}
int		main(void)
{
	char n = 't';
	reverse_bits(n);
	write(1, "\n", 1);
}