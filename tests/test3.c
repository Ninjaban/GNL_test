/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:49:57 by jcarra            #+#    #+#             */
/*   Updated: 2016/12/29 11:35:37 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int ac, char **av)
{
	char	*line;

	while (get_next_line(0, &line) == 1)
		printf("%s\n", line);

	return (0);
}
