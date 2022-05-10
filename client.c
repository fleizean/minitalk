/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:38:14 by eyagiz            #+#    #+#             */
/*   Updated: 2022/05/10 13:38:15 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

// Karakterleri sunucuya bit olarak gönderdiğim yer
void	convert_char(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}
}

// Kullanım ./client argv[1 (Port ? PID)] argv[2 (Mesaj)] 
int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac != 3)
	{
		ft_putstr_fd("check the ac\n", 1);
		return (0);
	}
	pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		convert_char(av[2][i++], pid);
	}
}
