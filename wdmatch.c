#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char tab[127];
	int i;
	int j;
	int cont;
	int len;

	len = 0; 
	if(argc == 3)
	{
		while(argv[1][len])
			len++;
		printf("%d", len);
		i = 0;
		while(i < 127)
		{
			tab[i] = 0;
			i++;
		}
		i = 0;
		while(argv[2][i] != 0)
		{
			j = argv[2][i];
			if(tab[j] == 0)
				tab[j] = 1;
			i++;
		}
		i = 0;
		cont = 0;  
		while(argv[1][i] != 0)
		{
			j = argv[1][i];
			if(tab[j] == 1)
			{
				cont++;
				tab[j] = 2;		
			}
			i++;
		}
		printf("%d", cont);
		if(cont == len)
			write(1, argv[1], len);
		write(1, "\n", 1);
		return(0);
	}
}