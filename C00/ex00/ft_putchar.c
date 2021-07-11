#include <unistd.h>
// writes a single character to standard output
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
