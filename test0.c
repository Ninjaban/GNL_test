/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:49:57 by jcarra            #+#    #+#             */
/*   Updated: 2016/12/13 13:52:28 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int ac, char **av)
{
	char	*line;
	if (ac == 2)
	{
		int fd = open(av[1], O_RDONLY);
		while (get_next_line(fd, &line) == 1)
			printf("%s\n", line);
	}
	return (0);
}
