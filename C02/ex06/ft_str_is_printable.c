int	ft_str_is_printable(char *str)
{
	int	print;

	print = 0;
	while (str[print] != '\0')
	{
		if (str[print] < 32 || str[print] > 126)
			return (0);
		{
			print++;
		}
	}
	return (1);
}
