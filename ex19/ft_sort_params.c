/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:13:50 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 18:35:48 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_params(int nbr, char *str[])
{
	int		i;
	int		j;
	char	*buff;

	i = 1;
	j = 0;
	while (i < nbr)
	{
		j = 1;
		while (j < nbr - i)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				buff = str[j];
				str[j] = str[j + 1];
				str[j + 1] = buff;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char	*argv[])
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		write(1, argv[i], str_len(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}