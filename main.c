/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 14:14:07 by gahubaul          #+#    #+#             */
/*   Updated: 2016/02/08 14:14:09 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>


int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		;
	return (i);
}

void	ft_exit(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	exit(0);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		write(1, &str[i], 1);
}

int     main(int argc, char **argv)
{
	int fd;
	int read_result;
	char *buff[600];

    if (argc != 2)
		ft_exit("erreur nombre argument");
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_exit("erreur pour le Open ");
	if ((read_result = read(fd, buff, 600)) == -1)
		ft_exit("erreur de read");
	ft_putstr("salut comment vas tu \n");
	return (0);
}