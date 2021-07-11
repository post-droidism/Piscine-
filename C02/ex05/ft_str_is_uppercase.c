int	ft_str_is_uppercase(char 	*str)
{
	int	uppercase;

	uppercase = 0;
	while (str[uppercase] != '\0')
	{
		if (str[uppercase] >= 'A' && str[uppercase] <= 'Z')
		{
			uppercase++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
