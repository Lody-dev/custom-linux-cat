/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:32:10 by dsarmien          #+#    #+#             */
/*   Updated: 2024/12/03 20:29:58 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("tester", O_RDONLY);
	if (fd == -1)
	{
		printf("Error reading!̣\n");
		return (1);
	}
	else
	{
		while ((line = get_next_line(fd)) != NULL)
		{
			printf("%s", line);
			free(line);
		}
		free(line);
	}
	close(fd);
	return (0);
}
