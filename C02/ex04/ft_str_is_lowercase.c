int	ft_str_is_lowercase(char *str)
{
	int	lowcase;

	lowcase = 0;
	while (str[lowcase] != '\0')
	{
		if (str[lowcase] >= 'a' && str[lowcase] <= 'z')
		{
			lowcase++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
