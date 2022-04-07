#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i;

	i = 0;
	int temp;

	while(i <= 7)
	 {
		temp = octet & 1;
		if(temp == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet  >> 1;
		i++;
	 }
	return (0);
}