#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}