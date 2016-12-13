/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:49:57 by jcarra            #+#    #+#             */
/*   Updated: 2016/12/13 13:56:28 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int ac, char **av)
{
	char	*line1;
	char	*line2;
	if (ac == 3)
	{
		int fd1 = open(av[1], O_RDONLY);
		int fd2 = open(av[1], O_RDONLY);
		while (get_next_line(fd1, &line1) == 1 || get_next_line(fd2, &line2) == 1)
		{
			printf("%s\n", line1);
			printf("%s\n", line2);
		}
	}
	return (0);
}
