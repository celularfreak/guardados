char    *ft_strrev(char *str)
{
	int i;
	int len;
	char c;

	i = 0;
	while(str[len])
		len++;
	len--;
	while(i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
return(str);