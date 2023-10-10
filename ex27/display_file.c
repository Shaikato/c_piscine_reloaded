/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:18:06 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 19:18:06 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	if (argc == 1)
	{
		write(1, "File is missing.\n", 18);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, "Cannot read file.\n", 19);
		return (0);
	}
	while (read(fd, &c, 1) > 0)
		write(1, &c, 1);
	close (fd);
	return (0);
}