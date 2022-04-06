#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int	ft_atoi(const char *str)
{

int i;
int mult;
int num;

i = 0;
mult = 1;
num = 0;

while(str[i] == ' ' || str[i] == 't' || str[i] == 'n' || str[i] == 'v' || str[i] == 'r')
	i++;
if(str[i] == '+')
	i++;
if(str[i] == '-')
	mult = mult * -1;
while(str[i] && (str[i] >= '0' && str[i] <= '9'))
{
	num = num * 10;
	num = num + (str[i] - '0');
	i++;
}
num = num * mult;
return(num);
}