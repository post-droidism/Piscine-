#include <unistd.h>

// doesn't return a value
void	ft_print_alphabet(void)

// stores variable i with ascii value of 'a' and prints until ccond. is false
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
