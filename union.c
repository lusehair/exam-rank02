#include <unistd.h> 
#include <stdio.h>



int		check_current_arg(char *line, char c, int max)
{
	int i = 0; 
	while(i < max)
	{
		if(line[i] == c)
			return(1);
		i++;
	}
	return (0); 
}

int		check_all_arg(char *line, char c)
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

int		main(int ac, char **av)
{
	char back = '\n'; 
	int i = 0;
	
	if(ac != 3)
	{
		write(1,&back, 1); 
		return (0); 
	}
	while(av[1][i])
	{
		if(!check_current_arg(av[1], av[1][i], i))
			write(1, &av[1][i], 1); 
		i++;
	}
	i = 0; 
	while(av[2][i])
	{
		if(!check_current_arg(av[2], av[2][i], i))
			if(!check_all_arg(av[1], av[2][i]))
				write(1, &av[2][i],1); 
		i++;
	}
	write(1,&back,1);
	return (0);
}
