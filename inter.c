#include <unistd.h> 






int		sibling_letters(char *line,  char c)
{
	int i = 0; 
	while(line[i])
	{
		if(line[i] == c)
			return (1); 
		i++;
	}
	return (0); 
}

int		antidoublon(char *line, char c, int lim)
{
	int i= 0; 

	while(i < lim)
	{
		if(line[i] == c)
			return (0);
		i++;
	}
	return (1);
}




int		main(int ac, char **av)
{
	char back = '\n';
	int i = 0; 

	if(ac != 3)
	{
		write(1, &back, 1); 
		return (0); 
	}
	while(av[1][i])
	{
		if(sibling_letters(av[2], av[1][i]) && antidoublon(av[1], av[1][i], i))
			write(1, &av[1][i], 1);
		i++;
	}
	write(1,&back,1);
	return (0);
}
