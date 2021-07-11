int	ft_str_is_numeric(char *str)
{
	int	digit;

	digit = 0;
	while (str[digit] != '\0')
	{
		if (str[digit] >= '0' && str[digit] <= '9')
		{
			digit++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
